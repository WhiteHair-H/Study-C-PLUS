//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	void AFunc()
//	{
//		cout << "A::AFunc()" << endl;
//	}
//
//};
//
//class B : public A
//{
//public:
//	void BFunc()
//	{
//		cout << "B::BFunc" << endl;
//	}
//};
//
//class C : public B
//{
//public:
//	void CFunc()
//	{
//		cout << "C::CFunc" << endl;
//	}
//};
//
//int main()
//{
//	A* pa = new C; // 기초클래스 타입의 포인터가 파생객체를 가리키고 있다. 부모 -> 자식
//	pa->AFunc();
//
//	//C* pcc = new A; // 자식 -> 부모 원칙상 불가능 
//
//	B* pb = new C;
//	pb->AFunc();
//	pb->BFunc();
//	C* pc = new C;
//	pc->AFunc();
//	pc->BFunc();
//	pc->CFunc();
//
//	return 0;
//}