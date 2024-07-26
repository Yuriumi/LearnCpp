#include <iostream>	// 预处理，在实际编译之前就被处理了
#include <string>
#include "Log.cpp"

class Entity 
{
	std::string m_name;
};

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	int* a = new int;
	int* b = new int[50];

	delete a;
	delete[] b;

	Entity* e1 = new Entity;
	Entity* e2 = new Entity[50];

	delete e1;
	delete[] e2;

	// 分配内存
	Entity* e = new Entity;
	Entity* e3 = (Entity*)malloc(sizeof(Entity));
	delete e;
	delete e3;

	int* d = new int[50];
	Entity* e4 = new(d) Entity;

	delete e4;
	delete d;

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
