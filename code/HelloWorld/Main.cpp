#include <iostream>	// 预处理，在实际编译之前就被处理了
#include <string>
#include "Log.cpp"

class Entity
{
private:
	int X{ 10 }, Y{ 10 };
public:
	int GetX() const
	{
		return X;
	}

	int GetY() const
	{
		return Y;
	}

	void Set(int x, int y)
	{
		X = x;
		Y = y;
	}
};

void Print(const Entity& e)
{
	//	e.Set(20, 20);	Error
	LOG(e.GetX());
}

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	int b = 20;

	const int* a = new int;
	a = &b;
	// *a = 20;	ERROR

	int const* c = new int;
	// *c = 50;	ERROR
	a = &b;

	int* const d = new int;
	*d = 30;
	// d = &b;	ERROR

	Entity e;
	Print(e);

	const Entity e1;
	e1.GetX();

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
