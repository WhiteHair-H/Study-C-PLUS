//#include <stdio.h>
//
//void sub(int a) { printf("int:%d\n", a); }
//void sub(int *a) { printf("pointer:%p\n", a); }
//
//int main()
//{
//	int i = 1234, * pi = &i;
//
//	sub(i);
//	sub(pi);
//	sub(NULL); // 3행에 의해서 int값으로 받음
//	sub((int *)NULL); // 4행에 의해서 포인터값으로 받음
//
//
//	return 0;
//}