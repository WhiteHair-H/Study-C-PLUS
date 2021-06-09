//#include <stdio.h>
//
//enum E_Error {OUTOMEMORY, OVERRANGE , HARDFULL};
//void report() throw(E_Error)
//{
//	if (true)throw OVERRANGE;
//}
//
//int main()
//{
//	try
//	{
//		report();
//		puts("작업을 완료했습니다.");
//	}
//	catch (E_Error e)
//	{
//		switch (e)
//		{
//		case OUTOMEMORY:
//			puts("메모리가 부족합니다.");
//			break;
//		case OVERRANGE:
//			puts("연산범위를 초과했습니다.");
//			break;
//		case HARDFULL:
//			puts("하드디스크가 가득찼습니다.");
//		}
//	}
//
//	return 0;
//}