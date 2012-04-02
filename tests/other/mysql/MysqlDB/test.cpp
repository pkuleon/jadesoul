#include "MysqlDB.h"
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<strmap> info;
	MysqlDB db("localhost","root","gbsoft", 3306);
	db.DBConnect();
	db.DBSelect("mysql");
	string query = "select user,password from user";
	db.SetQuery(query);
	db.DBQuery();
	info = db.GetArray();
	for (int i=0; i<info.size(); i++)
	{
		cout<<info[i]["user"]<<":"<<info[i]["password"]<<endl;
	}
	return 1;
}
