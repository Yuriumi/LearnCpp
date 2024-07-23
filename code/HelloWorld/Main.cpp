#include <iostream>	// 预处理，在实际编译之前就被处理了
#define LOG(x) std::cout << x << std::endl

extern int s_var;
int var = 10;

struct Entity {
	int a, b;
	static int c, d;

	void Print()
	{
		LOG(a << b);
	}

	static void Print1()
	{
		LOG(c << d);
	}
};

int Entity::c;
int Entity::d;

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	Entity e = { 2,4 };
	e.Print();

	Entity::c = 10;
	Entity::d = 10;
	Entity::Print1();

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
