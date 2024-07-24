#include <iostream>	// 预处理，在实际编译之前就被处理了
#include <string>
#include "Log.cpp"


int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	int arr[5];
	for (int i = 0; i < 5; i++)
		arr[i] = 2;
	int* ptr = arr;
	*(int*)((char*)ptr + 8) = 5;
	LOG(*(int*)((char*)ptr + 8));

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
