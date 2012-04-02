#ifndef MYSQL_DB_H
#define MYSQL_DB_H
#include <mysql.h>
#include <string>
#include <map>
#include <vector>
#include <iostream>
using namespace std;
typedef map<string,string> strmap;

/*mysql操作类，封装了c语言相关的api，可实现基本的查询、插入、修改和删除动作*/
class MysqlDB
{
protected:
	MYSQL *mysql; //代表一个到数据库的连接
private:
	string host; //连接的服务器
	string user; //用户名
	string password; //连接密码
	unsigned int port; //连接端口
	string db; //操作的数据库的名称
	MYSQL_RES *result; //操作的结果
	string query; //sql语句
	unsigned long num; //返回查询得到的结果数
	string error; //错误提示信息
	unsigned int debug; //是否显示调试信息
	strmap info ; //查询语句返回一条结果
	vector<strmap> arrInfo; //查询语句可能会返回多条结果
	vector<string> fields; //返回查询结果的列
	void disPlayError();
public:
	MysqlDB(string host,string user,string password,unsigned int port);// 构造函数
	MysqlDB(); //构造函数
	void SetConnect(string host,string user,string password,unsigned int port);//确定连接参数
	unsigned int DBConnect();//连接数据库
	unsigned int DBSelect(string db); //连接一个数据库
	void SetQuery(string q); //设定查询语句
	unsigned int DBQuery(); //查询数据库
	strmap GetInfo(); //返回查询得到的一条结果
	vector<strmap> GetArray(); //返回查询得到的结果
	string GetError(); //返回错误信息
	vector<string> GetFields();//返回查询后的列值
	unsigned int InsertData(string table,strmap *data); //向数据库中插入一条数据
	unsigned long GetLastID(); //返回最后一个自动增量的值
	unsigned long GetNum(); //返回一条sql语句影响的行数
	unsigned int UpdateData(string table,strmap *data,string condition); //根据条件修改一条数据
	unsigned int DeleteData(string table,string condition); //根据条件删除数据
	~MysqlDB();//析构函数
};
#endif
