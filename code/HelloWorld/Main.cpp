#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include <string>
#include "Log.cpp"

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
	virtual std::string GetName()
	{
		return "Cherno";
	}

	std::string GetClassName() {
		return "Entity";
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

	std::string GetClassName() {
		return "Player";
	}
};

void PrintName(Entity* e)
{
	LOG(e->GetName());
}

void PrintClassName(Printable* p)
{
	LOG(p->GetClassName());
}

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	Entity* e = new Entity();
	PrintName(e);
	Player* player = new Player();
	PrintName(player);

	PrintClassName(e);
	PrintClassName(player);

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
