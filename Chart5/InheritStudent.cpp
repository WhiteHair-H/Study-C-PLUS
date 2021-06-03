//#include <stdio.h>
//#include <string.h>
//
//// 생성자 호출 순서
//// 1. 파생class 생성자 호출
//// 2. 부모class 생성자 호출 및 실행
//// 3. 파생class 생성자 실행
//
//
//class Human
//{
//private:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage)
//	{
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro()
//	{
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human // 접근 지정자 public 학생은 사람이다
//{
//private:
//	int stunum;
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
//	{
//		stunum = astunum;
//	}
//	void study()
//	{
//		printf("이이는 사 , 이삼은 육 , 이사 팔\n");
//	}
//};
//
//int main()
//{
//	Human ha("하진우", 27);
//	ha.intro();
//	Student han("한닉", 13, 12312);
//	han.intro();
//	han.study();
//
//	return 0;
//}