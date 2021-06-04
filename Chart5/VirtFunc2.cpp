//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//protected:
//	char name[12];
//	int age;
//
//public:
//	Human(const char* aname, int aage)
//	{
//		strcpy(name, aname);
//		age = aage;
//	}
//	virtual void intro()
//	{
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class student : public Human
//{
//protected:
//	int stunum;
//public:
//	student(const char* aname, int aage, int astunum) :Human(aname, aage)
//	{
//		stunum = astunum;
//	}
//	void intro()
//	{
//		printf("%d학번 %s입니다.\n", stunum, name);
//	}
//	virtual void study()
//	{
//		printf("이이는 사 , 이삼은 육, 이사팔\n");
//	}
//};
//
//void IntroSomeBody(Human* ph) { ph->intro(); }
//
//int main()
//{
//	Human h("하진우", 27);
//	student s("이학생", 15, 123456);
//
//	IntroSomeBody(&h);
//	IntroSomeBody(&s);
//
//
//
//	return 0;
//}