////클래스 탬플릿
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class CTest
//{
//private:
//	T num;
//public:
//	//CTest(T anum) : num(anum) {};
//	CTest(T);								// 선언
//	
//	void printData()
//	{
//		cout << "num : " << num << endl;
//	}
//};
//template <typename T>						// 템플릿 선언 한번더!
//CTest<T>::CTest(T anum) : num(anum) {};		// 생성자 정의
//
//
//int main()
//{
//	// CTest obj(10); 오류!! 클래스에서는 명시적 타입 생성!
//	CTest <int>obj(10);
//	obj.printData();
//
//	return 0;
//}
