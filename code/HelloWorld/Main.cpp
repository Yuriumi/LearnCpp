#include <iostream>	// 预处理，在实际编译之前就被处理了
#include <string>
#include "Log.cpp"

class Entity
{
private:
	std::string m_Name;
	int X, Y;
public:
	Entity(std::string name,int x,int y)
		:m_Name(name),X(x),Y(y)
	{
		LOG("Create a Entity!");
	}

	void PrintName() const
	{
		LOG(m_Name);
	}
};

class Example
{
private:
	std::string m_Name;
	Entity e;
public:
	Example(std::string name,Entity e1)
		:m_Name(name),e(e1)
	{
		LOG("Create a Example!");
	}

	void PrintName() const
	{
		LOG(m_Name);
	}
};

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	Entity e("Cherno",4,4);
	e.PrintName();

	Example e1("Big",e);
	e1.PrintName();

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
