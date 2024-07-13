#include <iostream>	// 预处理，在实际编译之前就被处理了
#include "Log.h"

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
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
		Log("死循环");
	}*/

	unsigned g = i;

	while (i < 5)
	{
		Log("while循环!");
	}

	unsigned int j = 0;

	do 
	{
		Log("先执行一遍");
		j++;
	} while (j < 5);

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}