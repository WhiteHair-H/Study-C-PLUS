//#include <stdio.h>
//#include <string.h>
//
//class Human
//{
//private:
//	char name[20];
//	int age;
//
//public:
//	Human(const char* aname, int aage) {
//		strcpy(name, aname);
//		age = aage;
//	}
//	void intro() {
//		printf("이름 = %s , 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//protected:
//	int stunum;
//
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
//	{
//		stunum = astunum;
//	}
//	void study()
//	{
//		printf("이이는 사 , 이삼은 육, 이사팔\n");
//	}
//};
//
//class graduate : public Student
//{
//protected:
//	char thesis[32];
//
//public :
//	graduate(const char* aname, int aage, int astunum, const char* athsis) : Student(aname, aage, astunum)
//	{
//		strcpy(thesis, athsis);
//	}
//	void research()
//	{
//		printf("%s을 연구하고 논문을 쓴다.\n", thesis);
//	}
//};
//
//
//int main()
//{
//	graduate moon("하진우", 27, 960111, "리눅스마스터");
//	moon.research();
//	return 0;
//}