//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//using namespace std;
//
//// 3명 회원정보 입력시 3명 회원정보 출력
//
//class CMember
//{
//private:
//	char name[20];
//	char phone[20];
//	char address[30];
//	static int cnt;
//
//public:
//	void getData(const char* gname, const char* gphone, const char* gaddress);
//	void setData();
//	~CMember() {}
//};
//
//int CMember::cnt = 0;
//void CMember::getData(const char* gname, const char* gphone, const char* gaddress)
//{
//	strcpy(name, gname);
//	strcpy(phone, gphone);
//	strcpy(address, gaddress);
//	cnt++;
//}
//void CMember::setData()
//{
//
//	printf("cnt = %d\n회원이름 : %s\n전화번호 : %s\n주소 : %s\n", cnt, name, phone, address);
//	printf("-------------------\n");
//}
//
//int main()
//{
//	
//	CMember c1;
//	c1.getData("jinwoo", "010-1111-5555", "대연동");
//	c1.setData();
//	CMember c2;
//	c2.getData("nick", "010-2222-2222", "해운대");
//	c2.setData();
//	CMember c3, * pc4;
//	pc4 = new CMember;
//	pc4->getData("wen", "010-3333-3333", "동래");
//	pc4->setData();
//	delete pc4;
//	pc4->setData();
//	if (pc4 == NULL)printf("회원정보가 존재하지않습니다.\n");
//	c3.getData("qou", "010-5555-5555", "수영구");
//	c3.setData();
//	printf("c1크기 = %d , c2크기 = %d , c3크기 = %d\n", sizeof(c1), sizeof(c2), sizeof(c3));
//
//
//	return 0;
//}
