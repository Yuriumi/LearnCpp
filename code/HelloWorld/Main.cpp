#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include <string>
#include "Log.cpp"


int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	int arr[5];
	for (int i = 0; i < 5; i++)
		arr[i] = 2;
	int* ptr = arr;
	*(int*)((char*)ptr + 8) = 5;
	LOG(*(int*)((char*)ptr + 8));

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
