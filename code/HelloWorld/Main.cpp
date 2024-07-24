#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
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

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	Entity* e = new Entity();
	PrintName(e);
	Player* player = new Player();
	PrintName(player);

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
