//#include <stdio.h>
//
//class Exception
//{
//private:
//	int ErrorCode;
//public:
//	Exception(int ae): ErrorCode(ae){}
//	int GetErrorCode() { return ErrorCode; }
//	void ReportError() {
//		switch (ErrorCode)
//		{
//		case 1:
//			puts("메모리부족!!");
//			break;
//		case 2:
//			puts("연산 범위 초과!!");
//			break;
//		case 3:
//			puts("하드 디스크가 가득참!!");
//			break;
//		}
//	}
//};
//
//
//void report() 
//{
//	if (true)throw Exception(3);
//}
//
//int main()
//{
//	try
//	{
//		report();
//		puts("작업완료!!");
//	}
//	catch (Exception &e)
//	{
//		printf("에러 코드 = %d -> ", e.GetErrorCode());
//		e.ReportError();
//	}
//
//	return 0;
//}