//#include <stdio.h>
//
//class StaticTest
//{
//public:
//	int a;
//	static int b;		// static 멤버변수 선언
//	StaticTest()
//	{
//		a = 10;
////		b = 20;			// 클래스 내부에서 초기화 안된다.
//		b++;
//	}
//	void getData()
//	{
//		printf("a = %d , b = %d \n", a, b);
//	}
//private:
//
//
//};
//
//int StaticTest::b = 20; // static 멤버변수 초기화(외부에서 초기화한다.) - 객체내에 존재하지 않는다.
//
//int main()
//{
//	StaticTest s1;
//	s1.getData();
//	StaticTest s2;
//	s2.getData();
//
//
//	return 0;
//}