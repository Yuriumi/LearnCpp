#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#define LOG(x) std::cout << x << std::endl

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	int var = 8;
	int* ptr = &var;
	*ptr = 10;

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
