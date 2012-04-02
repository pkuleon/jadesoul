
#include "MysqlDB.h"
#include <assert.h>
/*构造函数，设定连接的服务器，用户名，密码和端口*/
MysqlDB::MysqlDB(string host,string user,string password,unsigned int port=3306)
{
	mysql = mysql_init(NULL);
	num = 0;
	error="";
	query="";
	result = NULL;
	SetConnect(host,user,password,port);
}
MysqlDB::MysqlDB()
{
}
/*设定连接的服务器，用户名，密码和端口*/
void MysqlDB::SetConnect(string host,string user,string password,unsigned int port)
{
	MysqlDB::host = host;
	MysqlDB::user = user;
	MysqlDB::password = password;
	MysqlDB::port = port;
}
/*连接数据库*/
unsigned int MysqlDB::DBConnect()
{
	MYSQL *con;
	if (mysql == NULL)
	{
		error = "初始化mysql错误";
		return 1;
	}
	con = mysql_real_connect(mysql,host.c_str(),user.c_str(),password.c_str(),NULL,port,NULL,0);
	if (con == NULL)
	{
		error=mysql_error(mysql);
		return mysql_errno(mysql);
	}
	return 0;
}
/*选择一个数据库*/
unsigned int MysqlDB::DBSelect(string database)
{
	unsigned int re;
	if ( mysql == NULL) return 1;
	db = database;
	re = mysql_select_db(mysql,db.c_str());
	if (re != 0)
	{
		error+=mysql_error(mysql);
	}
	return re;
}
/*设定sql语句*/
void MysqlDB::SetQuery(string q)
{

	assert(!q.empty());
	if (result != NULL )
	{
		mysql_free_result(result);
	}
	query = q;
}
/*执行sql语句*/
unsigned int MysqlDB::DBQuery()
{
	unsigned int re;
	if ( mysql == NULL) return 1;
	assert(!query.empty());
	re = mysql_query(mysql,query.c_str());
	if (re == 0)
	{
		result = mysql_store_result(mysql);
		num = mysql_affected_rows(mysql);
		info.clear();
		arrInfo.clear();
		fields.clear();
	}
	else
	{
		re = mysql_errno(mysql);
		error = mysql_error(mysql);
		cout<<error<<endl;
	}
	return re;
}


/*获取查询得到的一条结果*/
strmap MysqlDB::GetInfo()
{
	MYSQL_ROW row;
	unsigned int i;
	assert(mysql != NULL);
	if (info.size() > 0) return info;
	if (result != NULL)
	{
		GetFields();
		row = mysql_fetch_row(result);
		if (row != NULL)
		{
			for (i=0; i<fields.size(); i++)
			{
				info[fields[i]] = (char*)row[i];
			}
		}
//mysql_free_result(result);
	}
	return info;
}
/*获取查询得到的所有结果*/
vector<strmap> MysqlDB::GetArray()
{
	MYSQL_ROW row;
	unsigned int i;
	strmap tmp;
	assert(mysql != NULL);
	if (arrInfo.size() > 0) return arrInfo;
	if (result != NULL)
	{
		GetFields();
		while (row = mysql_fetch_row(result))
		{
			if (row != NULL)
			{
				for (i=0; i<fields.size(); i++)
				{
					tmp[fields[i]] = (char *)row[i];
				}
				arrInfo.push_back(tmp);
			}
		}
	}
	return arrInfo;
}
/*获取sql语句执行影响的行数*/
unsigned long MysqlDB::GetNum()
{
	return num;
}
/*获取插入后的id号*/
unsigned long MysqlDB::GetLastID()
{
	return mysql_insert_id(mysql);
}
/*向数据库插入数据*/
unsigned int MysqlDB::InsertData(string table,strmap *data)
{
	strmap::const_iterator iter;
	string q1;
	int flag=0;
	assert(mysql != NULL);
	assert(!table.empty());
	assert(data != NULL);
	for (iter = data->begin(); iter!= data->end(); iter++)
	{
		if (flag == 0)
		{
			q1 = "insert into ";
			q1+=table;
			q1+=" set ";
			q1+=iter->first;
			q1+="=\"";
			    q1+=iter->second;
			    q1+="\"";
			flag++;
		}
		else
		{
			q1+=",";
			q1+=iter->first;
			q1+="=\"";
			    q1+=iter->second;
			    q1+="\"";
		}
	}
	SetQuery(q1);
	return DBQuery();
}
/*根据条件修改数据*/
unsigned int MysqlDB::UpdateData(string table,strmap *data,string condition)
{
	strmap::const_iterator iter;
	string q1;
	int flag=0;
	assert(mysql != NULL);
	assert(!table.empty());
	assert(data != NULL);
	for (iter = data->begin(); iter!= data->end(); iter++)
	{
		if (flag == 0)
		{
			q1 = "update ";
			q1+=table;
			q1+=" set ";
			q1+=iter->first;
			q1+="=\"";
			    q1+=iter->second;
			    q1+="\"";
			flag++;
		}
		else
		{
			q1+=",";
			q1+=iter->first;
			q1+="=\"";
			    q1+=iter->second;
			    q1+="\"";
		}
	}
	if (!condition.empty())
	{
		q1+=" where ";
		q1+=condition;
	}
	SetQuery(q1);
	return DBQuery();
}
/*根据条件删除数据*/
unsigned int MysqlDB::DeleteData(string table,string condition)
{
	string q;
	assert(mysql != NULL);
	assert(!table.empty());
	q="delete from ";
	q+=table;
	if (!condition.empty())
	{
		q+=" where ";
		q+=condition;
	}
	SetQuery(q);
	return DBQuery();
}

/*获取返回的错误信息*/
string MysqlDB::GetError()
{
	return error;
}

/*返回查询后的列值*/
vector<string> MysqlDB::GetFields()
{
	MYSQL_FIELD *field;
	assert(mysql != NULL);
	if (fields.size()>0) return fields;
	while (field = mysql_fetch_field(result))
	{
		fields.push_back(field->name);
	}
	return fields;
}

/*析构函数*/
MysqlDB::~MysqlDB()
{
	if (result != NULL)
		mysql_free_result(result);
	fields.clear();
	error="";
	info.clear();
	db="";
	arrInfo.clear();
	mysql_close(mysql);
}
