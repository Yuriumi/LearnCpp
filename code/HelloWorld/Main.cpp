#include <iostream>	// 预处理，在实际编译之前就被处理了

void Log(const char* message);

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	// 程序是一行一行执行的
	std::cout << "Hello World" << std::endl;	// << 的本质是一个函数,将字符串推送到cout流中
	Log("Hello CPP");
	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}