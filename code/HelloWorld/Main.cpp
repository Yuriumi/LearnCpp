#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������

int Multiply(int a, int b)
{
	return a * b;
}

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	int result = Multiply(3, 5);

	std::cout << "Hello World!" << std::endl;	// << �ı�����һ������,���ַ������͵�cout����
	std::cin.get();	// cin/cout ���Ǻ���,���������������
}