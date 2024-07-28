#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
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

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
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


	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
