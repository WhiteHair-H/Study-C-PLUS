//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//class Human
//{
//private:
//	char *name;
//	int age;
//public:
//	Human(){}
//	Human(char aname, int aage)
//	{
//		name = new char[strlen(&aname) + 1];
//		strcpy(name, &aname);
//		age = aage;
//	}
//	Human(const char *aname, int aage)
//	{
//		name = new char[strlen(aname) + 1];
//		strcpy(name, aname);
//		age = aage;
//	}
//	Human(const Human& other)
//	{
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//	const Human operator = (const Human& other) const {
//		Human h;
//		h.name = new char[strlen(other.name) + 1];
//		strcpy(h.name, other.name);
//		h.age = other.age;
//
//		h.printHuman();
//		return h;
//	}
//	void printHuman()
//	{
//		printf("이름 : %s\n나이 : %d\n", this->name, this->age);
//	}
//	~Human() { delete[]name; }
//};
////
////class Student : public Human
////{
////private:
////	int stunum;
////public:
////	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
////	{
////		stunum = astunum;
////	}
////	void study()
////	{
////		printf("이이는 사, 이삼은 육, 이사 팔\n");
////	}
////};
//int main()
//{
//	Human myh("하진우" , 27);
//	myh.printHuman();
//
//	//Human myh2("nick", 30);
//	Human youH(myh);
//	youH.printHuman();
//
//	Human xman = myh;
//	xman.printHuman();
//
//	/*Student ha("jinwoo", 29, 123456);
//	ha.printHuman();
//	ha.study();*/
//
//	return 0;
//}