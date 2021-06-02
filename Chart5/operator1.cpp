//#include <stdio.h>
//
//
//
//class Mytest
//{
//private:
//	int x, y;
//public:
//	Mytest(){}
//	Mytest(int sx, int sy) { x = sx, y = sy; }
//	const Mytest Sum(const Mytest& other) const
//	{
//		Mytest m;
//		m.x = x + other.x;
//		printf("obj1(%d) + obj2(%d) = obj3(%d)\n", x, other.x, m.x);
//		m.y = y + other.y;
//		printf("obj1(%d) + obj2(%d) = obj3(%d)\n", y, other.y, m.y);
//
//
//		return m;
//	}
//	void printData()
//	{
//		printf("%d , %d\n" , x , y);
//	}
//};
//
//
//
//int main()
//{
//	Mytest obj1(10, 20); // 10 , 20
//	Mytest obj2(30, 40); // 30 , 40
//	Mytest obj;			 // ºó°ª
//	obj = obj1.Sum(obj2); // (10 + 30) , (20 + 40)
//	obj.printData();
//
//
//
//	return 0;
//}