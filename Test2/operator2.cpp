//#include <stdio.h>
//
//
//
//class Mytest
//{
//	friend const Mytest operator/(const Mytest& me, const Mytest& other);
//private:
//	int x, y;
//public:
//	Mytest() {}
//	Mytest(int sx, int sy) { x = sx, y = sy; printf("!!인수 2개 생성자 호출!!\n"); }
//	Mytest(Mytest& res) : x(res.x), y(res.y)
//	{
//		printf("!!복사생성자 호출!!\n");
//	}
//	void printData()
//	{
//		printf("결과 --> %d , %d\n\n", this->x, this->y);
//	}
//	const Mytest& operator +(const Mytest& other) const // &참조자가 없을 경우 복사생성자(임시객체)를 생성하지않음
//	{
//		Mytest m;
//		printf("---------더하기연산자---------\n");
//		m.x = this->x + other.x;
//		printf("obj1(%d) + obj2(%d) = obj3(%d)\n", x, other.x, m.x);
//		m.y = this->y + other.y;
//		printf("obj1(%d) + obj2(%d) = obj3(%d)\n", y, other.y, m.y);
//		return m;
//	}
//	const Mytest& operator -(const Mytest& other) const
//	{
//		Mytest m;
//		printf("---------빼기연산자---------\n");
//		m.x = this->x - other.x;
//		printf("obj1(%d) - obj2(%d) = obj3(%d)\n", x, other.x, m.x);
//		m.y = this->y - other.y;
//		printf("obj1(%d) - obj2(%d) = obj3(%d)\n", y, other.y, m.y);
//		return m;
//	}
//	/*const Mytest& operator =(const Mytest& other)
//	{
//		printf("---------대입연산자---------\n");
//		x = other.x;
//		y = other.y;
//		return *this;
//	}*/
//	const Mytest& multi(const Mytest& other)const
//	{
//		Mytest m;
//		printf("---------곱하기연산자---------\n");
//		m.x = this->x * other.x;
//		printf("obj1(%d) * obj2(%d) = obj3(%d)\n", x, other.x, m.x);
//		m.y = this->y * other.y;
//		printf("obj1(%d) * obj2(%d) = obj3(%d)\n", y, other.y, m.y);
//		return m;
//	}
//};
//const Mytest operator/(const Mytest& me, const Mytest& other)
//{
//	Mytest m;
//	printf("---------나누기연산자---------\n");
//	m.x = me.x / other.x;
//	printf("obj1(%d) / obj2(%d) = obj3(%d)\n", me.x, other.x, m.x);
//	m.y = me.y / other.y;
//	printf("obj1(%d) / obj2(%d) = obj3(%d)\n", me.y, other.y, m.y);
//	return m;
//}
//
//
//
//int main()
//{
//	Mytest obj1(10, 20); // 10 , 20
//	Mytest obj2(30, 40); // 30 , 40
//	Mytest obj3;			 // 빈값
//	Mytest obj4;
//	Mytest obj5;
//	Mytest obj6;
//	obj3 = obj1 + obj2; // (10 + 30) , (20 + 40)
//	//obj3 = obj1.operator=(obj2);
//	obj3.printData();
//	obj4 = obj2.operator-(obj1);
//	obj4.printData();
//	obj5 = obj2.multi(obj1);
//	obj5.printData();
//	obj6 = obj2 / obj1;
//	obj6.printData();
//
//
//	return 0;
//}