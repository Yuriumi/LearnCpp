#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#define LOG(x) std::cout << x << std::endl

void Increment(int& value) 
{
	value++;
}

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	int a = 8;
	int& ref = a;
	LOG(a);

	Increment(a);
	LOG(a);

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
