//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//class CTest
//{
//private:
//	int num;
//public:
//	CTest(int anum)
//	{
//		num = anum;
//		cout << num <<" CTest 생성자!!\n" << endl;
//	};
//	virtual void func()
//	{
//		cout << " CTest Fucntion()\n" << endl;
//	}
//	virtual ~CTest() { cout << num << " CTest 파괴!\n" << endl; }
//};
//
//class CTestSub : public CTest
//{
//private:
//	int subN;
//public:
//	CTestSub(int num, int asubN) :CTest(num)
//	{
//		subN = asubN;
//		cout << subN << " CTestSub 생성자!\n" << endl;
//	};
//	~CTestSub() { cout << subN << " CTestSub 파괴!\n"; }
//	void func()
//	{
//		cout << " CTestSub Fuction()\n" << endl;
//	}
//	
//};
//
//
//int main()
//{
//	CTest b(10);
//	b.func();
//	CTestSub s(10, 20);
//	s.func();
//
//	CTest* pb = new CTestSub(30, 33); // 추상자료형으로 자식객체를 가리키게 한다.
//	pb->func();
//
//	delete pb;
//
//	return 0;
//}