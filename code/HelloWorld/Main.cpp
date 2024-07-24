#include <iostream>	// 预处理，在实际编译之前就被处理了
#include "Log.cpp"

class Entity
{
public:
	int X, Y;

	Entity(int x, int y)
	{
		X = x;
		Y = y;
	}

	void Print()
	{
		LOG(X << ',' << Y);
	}

	~Entity()
	{
		LOG("Delte!");
	}

};

class M_LOG
{
public:
	M_LOG() = delete;

	static void Write()
	{

	}
};

void Function()
{
	Entity e(10, 5);
	e.Print();
}

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	Function();

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
