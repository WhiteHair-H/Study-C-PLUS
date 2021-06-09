//#include <stdio.h>
//
//class DBQuery
//{
//private:
//	static int hCon;
//	int nReasult;
//public:
//	DBQuery() {};
//	static void DBConnect(const char* Server, const char* ID, const char* Pass);
//	static void DBDisConnect();
//	bool RunQuery(const char* SQL);
//};
//
//int DBQuery::hCon;
//void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
//{
//	hCon = 1234;
//	puts("연결되었습니다");
//}
//void DBQuery::DBDisConnect()
//{
//	hCon = NULL;
//	puts("연결이 끊겼습니다.");
//}
//bool DBQuery::RunQuery(const char* SQL)
//{
//	puts(SQL);
//	return true;
//}
//
//int main()
//{
//	DBQuery::DBConnect("Secret", "Adult", "dasdqwjl");
//	DBQuery Q1, Q2, Q3;
//
//	Q1.RunQuery("Select * from tblbuja where 나랑 친한사람");
//	DBQuery::DBDisConnect();
//
//
//	return 0;
//}
//
