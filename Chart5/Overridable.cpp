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
//	void eat() {
//		puts("냠냠냠");
//	}
//	virtual void intro()
//	{
//		printf("이름 = %s, 나이 = %d\n", name, age);
//	}
//};
//
//class Student : public Human
//{
//protected:
//	int stunum;
//public:
//	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
//	{
//		stunum = astunum;
//	}
//	void intro()
//	{
//		printf("%d학번 %s입니다.\n", stunum, name);
//	}
//};
//
//int main()
//{
//	Human h("김사랑", 10);	// 과거 유치원 소개
//	Student s("이학생", 16, 123124); // 유치원소개 이후로 점점 소개내용이 길어짐
//	Human* ph;
//
//	ph = &h;
//	ph->intro();
//	ph->eat();
//	ph = &s;
//	ph->intro();
//	ph->eat();
//
//	return 0;
//}