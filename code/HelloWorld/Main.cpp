#include <iostream>	// 预处理，在实际编译之前就被处理了
#include <string>
#include "Log.cpp"

class Entity
{
public:
	virtual std::string GetName()
	{
		return "Cherno";
	}
};

class Player : public Entity
{
public:
	const char* name;

	std::string GetName()
	{
		return "Player";
	}
};

void PrintName(Entity* e)
{
	LOG(e->GetName());
}

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	Entity* e = new Entity();
	PrintName(e);
	Player* player = new Player();
	PrintName(player);

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
