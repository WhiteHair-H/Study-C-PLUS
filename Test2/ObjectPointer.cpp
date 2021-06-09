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
//	void intro()
//	{
//		printf("ÀÌ¸§ = %s, ³ªÀÌ = %d", name, age);
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
//		printf("%dÇÐ¹ø %sÀÔ´Ï´Ù.\n", stunum, name);
//	}
//	void study()
//	{
//		printf("ÀÌÀÌ´Â »ç , ÀÌ»ïÀº À°, ÀÌ»çÆÈ\n");
//	}
//};
//
//int main()
//{
//	Human h("±è»ç¶û", 10);
//	student s("ÀÌÇÐ»ý", 15, 123456);
//	Human* ph;
//	student* ps;
//
//	ph = &h;
//	ps = &s;
//	ph = &s;		   // upcasting
//
//	ps = (student*)&h; // downcasting
//	ps->intro();
//	ph->intro();
//
//
//	return 0;
//}