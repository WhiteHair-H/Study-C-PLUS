//#include <stdio.h>
//
//class MyClass
//{
//public:
//	class Exception
//	{
//	private:
//		int Errorcode;
//	public:
//		Exception(int ae) : Errorcode(ae){}
//		int GetErrorCode() { return Errorcode; }
//		void ReportError()
//		{
//			switch (Errorcode)
//			{
//			case 1:
//				puts("메모리 부족!!");
//				break;
//			case 2:
//				puts("연산 범위 초과!!");
//				break;
//			case 3:
//				puts("하드 디스크 가득참!!");
//				break;
//			}
//		}
//	};
//
//	void calc()
//	{
//		try
//		{
//			if (true)throw Exception(1);
//		}
//		catch (Exception &e)
//		{
//			printf("에러 코드 = %d => ", e.GetErrorCode());
//			e.ReportError();
//		}
//	}
//	void calc2()throw(Exception)
//	{
//		if (true)throw Exception(2);
//	}
//};
//
//int main()
//{
//	MyClass m;
//	m.calc();
//	try
//	{
//		m.calc2();
//	}
//	catch (MyClass::Exception &e)
//	{
//		printf("에러 코드 = %d => ", e.GetErrorCode());
//		e.ReportError();
//	}
//
//	return 0;
//}