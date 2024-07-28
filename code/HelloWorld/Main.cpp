#include <iostream>	// 预处理，在实际编译之前就被处理了
#include <string>
#include <memory>
#include "Log.cpp"

class Entity
{
private:
	const std::string m_Name;
public:
	Entity(const std::string name)
		:m_Name("Know") {}

	void PrintName()
	{
		LOG(m_Name);
	}
};

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	{
		std::unique_ptr<Entity> e = std::make_unique<Entity>();
		e->PrintName();

		//std::unique_ptr<Entity> e1 = e;
	}
	// e->PrintName();

	std::shared_ptr<Entity> shareE;
	std::weak_ptr<Entity> weakE;
	{
		std::shared_ptr<Entity> e = std::make_shared<Entity>();
		shareE = e;
		weakE = e;
	}

	//weakE->PrintName();


	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
