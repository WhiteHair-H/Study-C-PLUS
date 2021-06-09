//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//
//void TestFunc1()
//{
//	cout << "TestFunc1() START" << endl;
//	//throw 0;
//	cout << "TestFunc1() END" << endl;
//}
//
//void TestFunc2()
//{
//	cout << "TestFunc2() START" << endl;
//	//TestFunc1();
//	throw 0;
//	cout << "TestFunc2() END" << endl;
//}
//void TestFunc3()
//{
//	cout << "TestFunc3() START" << endl;
//	TestFunc2();
//	cout << "TestFunc3() END" << endl;
//}
//
//int main()
//{
//
//	try
//	{
//		TestFunc3();
//	}
//	catch (...) // ... -> 모든 타입 다받는 타입
//	{
//		cout << "예외 발생!!" << endl;
//	}
//	TestFunc1();
//
//
//	return 0;
//}