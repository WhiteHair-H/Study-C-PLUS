// Ŭ���� ���ø� Ư��ȭ
#include <stdio.h>
#include <iostream>
using namespace std;

template<typename T>	// �Ϲ�ȭ
class CTest {
private:
	T data;
public:
	CTest(T adata) : data(adata) {};
	T getData() { return data; }
};
template <>				// Ư��ȭ
class CTest<char>
{
private:
	char data;
public:
	CTest(char adata) : data(adata) {};
	char getData() { return data; }
};


int main()
{
	CTest<int> obj(10);
	cout << obj.getData() << endl;

	CTest<char> obj2('a');
	cout << obj2.getData() << endl;

	return 0;
}