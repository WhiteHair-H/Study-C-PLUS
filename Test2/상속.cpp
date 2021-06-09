//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//class Human
//{
//private:
//	char* name;
//public:
//	Human(const char* aname)
//	{
//		int len = strlen(aname) + 1;
//		name = new char[len];
//		//strcpy(name, aname);
//		strcpy_s(name, len, aname); // strcpy 보단 안정적
//	}
//	~Human() { delete[] name; }
//	void printName()
//	{
//		cout << "My name is " << name << endl;
//	}
//	const char* getName() { return name; }
//};
//
//class Student : public Human
//{
//private:
//	char* major;
//public:
//	Student(const char* aname, const char* amajor) : Human(aname)
//	{
//		int len = strlen(amajor) + 1;
//		major = new char[len];
//		strcpy_s(major, len, amajor);
//		/*int len1 = strlen(aname) + 1;
//		aname = new char[len1];
//		strcpy_s(major, len1, aname);*/
//	}
//	
//	void printMajor()
//	{
//		cout << "My name is " << getName() << " End My major is " << major << "입니다." << endl;
//	}
//	~Student() { delete[] major; }
//};
//
//int main()
//{
//	Human h("jinwoo");
//	h.printName();
//
//	Student s("jinwoo", "Iot");
//	s.printMajor();
//	return 0;
//}