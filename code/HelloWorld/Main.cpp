#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include "Log.h"

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	if (4 > 3)
		Log("true");

	for (int i = 0; i < 10; i++)
	{
		Log("Hello World!");
	}

	unsigned int i = 0;

	for (; i < 10;)
	{
		Log("Hello World!");
		i++;
	}

	/*for (;;)
	{
		Log("��ѭ��");
	}*/

	unsigned g = i;

	while (i < 5)
	{
		Log("whileѭ��!");
	}

	unsigned int j = 0;

	do 
	{
		Log("��ִ��һ��");
		j++;
	} while (j < 5);

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}