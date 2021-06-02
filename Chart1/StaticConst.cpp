//#include <stdio.h>
//
//class MathCalc
//{
//private:
//	//static const double pie = 3.1416; // 실수는 지원X
//	static const double pie; 
//	static const int ipie = 3.1416; // 정수만 지원
//
//public:
//	MathCalc() {}
//	void DoCalc(double r)
//	{
//		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pie);
//	}
//};
//
//const double MathCalc::pie = 3.1416; // 원칙
//
//
//int main()
//{
//	MathCalc m;
//	m.DoCalc(5);
//
//	return 0;
//}