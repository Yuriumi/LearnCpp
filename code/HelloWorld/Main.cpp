#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
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

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	Player player;
	player.Move(2, 3);

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
