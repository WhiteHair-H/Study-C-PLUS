//#include <stdio.h>
//
//class StaticTest
//{
//	static int a;	//static 멤버변수
//	int b;
//public:
//	StaticTest();
//	static void setData(int); // static 멤버함수는 static 멤버변수에 사용한다.
//	void getData();
//};
//
//StaticTest::StaticTest()
//{
//	this->b = 20; // this포인터 사용
//}
//void StaticTest::getData()
//{
//	printf("b = %d , a = %d\n", b , a);
//}
//
//int StaticTest::a = 10; // static 멤버변수 초기화
//
//void StaticTest::setData(int aa)
//{
////	this->a = aa; // static a는 객체에 포함되지 않기에 this포인터 사용불가능
//	a = aa;
//	printf("a값 바꾸기 = %d\n", a);
//}
//
//int main()
//{
//	// 객체를 통해서 호출
//	StaticTest s1;
//	s1.getData();
//	StaticTest s2;
//	s2.getData();
//	s2.setData(30);
//	s2.getData();
//	s2.getData();
//
//	// class를 통해서 호출가능
//	StaticTest::setData(50);
//	s1.getData();
//	s2.getData();
//
//
//	return 0;
//}