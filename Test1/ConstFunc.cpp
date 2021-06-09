//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//public:
//	Time(int h, int m, int s)
//	{
//		SetTime(h, m, s);
//	}
//
//	void SetTime(int h, int m, int s)
//	{
//		hour = h;
//		min = m;
//		sec = s;
//	}
//
//	void OutTime() const //멤버함수 상수화
//	{
//		printf("현재시각은 %d:%d:%d입니다.\n", hour, min, sec);
//	}
//
//};
//
//int main()
//{
//	Time now(12, 34, 56);
//	now.SetTime(11, 22, 33);
//	now.OutTime();
//
//	const Time meeting(16, 00, 00);  // 객체상수화 -> 상수화된 멤버변수, 함수만 접근가능
//	//meeting.SetTime(17, 00, 00);
//	meeting.OutTime();
//
//	return 0;
//}