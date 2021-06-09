//#include <stdio.h>
//
//class Calc
//{
//public:
//	void Op1(int a, int b) { printf("%d\n", a + b); }
//	void Op2(int a, int b) { printf("%d\n", a - b); }
//	void Op3(int a, int b) { printf("%d\n", a * b); }
//};
//
//int main()
//{
//	int ch;
//	Calc c;
//	int a = 3, b = 4;
//
//	printf("연산방법을 선택하시오 . 0 = 더하기 , 1 = 빼기 , 2 = 곱하기 : ");
//	scanf("%d", &ch);
//
//	switch (ch)
//	{
//	case 0:
//		c.Op1(a, b);
//		break;
//	case 1:
//		c.Op2(a, b);
//		break;
//	case 2:
//		c.Op3(a, b);
//		break;
//	}
//
//	return 0;
//}