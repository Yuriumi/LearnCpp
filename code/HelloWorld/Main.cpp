#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include <string>
#include "Log.cpp"

class Entity
{
public:
	std::string m_Name;
	int m_Age;
	bool m_Attack;

	explicit Entity(bool attack)
		: m_Name("Unknow"), m_Age(-1), m_Attack(0) {}
};

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	Entity e = "1111";

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
