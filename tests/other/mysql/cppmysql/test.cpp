#include "cppmysql.h"

#include <stdlib.h>
#include <stdio.h>

int main()
{
	CppMySQL3DB db;

	int ret = db.open("127.0.0.1", "root", "", "test");
	if ( ret != 0 )
	{
		printf("db.open failed!\n");

		return -1;
	}
	else
		printf ("db.open OK!\n");

	CppMySQLQuery query1 = db.querySQL("select * from mytable");
	CppMySQLQuery query = query1;
	int field_count = query.numFields();

	printf("field_count is %d\n", field_count);


	const char* field_name = NULL;

	for (int i=0; i<query.numFields(); i++)
	{
		field_name = query.fieldName(i);

		printf("field_name is %s\n", field_name);
	}

	int field_index = query.fieldIndex("age");

	printf("field_index is %d\n", field_index);

	const char* content = query.getStringField(0);

	printf("content is %s\n", content);

	printf("row count is %u \n", query.numRow());
	while ( !query.eof() )
	{
		for (int i=0; i<query.numFields(); i++)
		{
			const char* field = query.getStringField(i);
			printf("%s\t", field);
		}

		printf("\n");

		query.nextRow();
	}

	query.seekRow(0);

	while ( !query.eof() )
	{
		char * filed_name = "age";
		const char* field = query.getStringField(filed_name);
		printf("field %s:%s", field_name, field);

		printf("\n");

		query.nextRow();
	}


	return 0;
}


