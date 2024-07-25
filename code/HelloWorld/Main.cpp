#include <iostream>	// 预处理，在实际编译之前就被处理了
#include <string>
#include "Log.cpp"


int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	const char* hello = "Hello Cpp";
	char helloChar[5] = { 'H','e','l','l','o' };	// 遇到字符串终止符停止

	LOG(helloChar);

	char stopChar[6] = { 'H','e','l','l','o','\0' };

	LOG(stopChar);

	std::string str = "Hello Cherno!";
	bool contains = str.find("no") != std::string::npos;

	str += "Cpp";

	LOG(str);
	LOG(contains);

	std::string str1 = "Hello" + std::string("React");
	LOG(str1);

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
