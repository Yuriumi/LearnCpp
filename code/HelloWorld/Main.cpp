#include <iostream>	// 预处理，在实际编译之前就被处理了

int Multiply(int a, int b)
{
	return a * b;
}

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	int result = Multiply(3, 5);

	std::cout << "Hello World!" << std::endl;	// << 的本质是一个函数,将字符串推送到cout流中
	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}