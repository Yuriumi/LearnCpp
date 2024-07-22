#include <iostream>	// 预处理，在实际编译之前就被处理了
#define LOG(x) std::cout << x << std::endl

void Increment(int& value) 
{
	value++;
}

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	int a = 8;
	int& ref = a;
	LOG(a);

	Increment(a);
	LOG(a);

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
