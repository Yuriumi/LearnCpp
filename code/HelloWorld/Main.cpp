#include <iostream>	// 预处理，在实际编译之前就被处理了
#include "Log.cpp"

class Entity
{
public:
	float x{ 0 }, y{ 0 };

	void Move(float xa, float ya)
	{
		LOG(x + xa << y + ya);
	}
};

class Player : public Entity
{
public:
	const char* name;

	void PrintName()
	{
		LOG(name);
	}
};

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	Player player;
	player.Move(2, 3);

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
