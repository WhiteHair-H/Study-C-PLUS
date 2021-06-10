//#include <iostream>
//#include <string>
//using namespace std;
//
//class CTest
//{
//public:
//	CTest() { cout << "CTest()" << endl; }
//	~CTest() { cout << "~CTest()" << endl; }
//	void func() { cout << "func()" << endl; }
//};
//
//
//int main()
//{
//	shared_ptr<CTest>ptr1(new CTest);
//	ptr1->func();
//	cout << "count: " << ptr1.use_count() << endl; // 다수 동적할당
//	{
//		shared_ptr<CTest>ptr2(ptr1);
//		cout << "count: " << ptr1.use_count() << endl;
//		ptr2->func();
//	} // 블록 빠져나오는 순간 동적할당 해제
//	cout << "count: " << ptr1.use_count() << endl;
//	ptr1->func();
//
//
//	return 0;
//}