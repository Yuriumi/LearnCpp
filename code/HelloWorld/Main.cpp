#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������

void Log(const char* message);

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	unsigned int variable = 8;

	std::cout << variable << std::endl;	// << �ı�����һ������,���ַ������͵�cout����
	std::cin.get();	// cin/cout ���Ǻ���,���������������
}