#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������

void Log(const char* message);

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	// ������һ��һ��ִ�е�
	std::cout << "Hello World" << std::endl;	// << �ı�����һ������,���ַ������͵�cout����
	Log("Hello CPP");
	std::cin.get();	// cin/cout ���Ǻ���,���������������
}