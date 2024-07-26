#include <iostream>	// 预处理，在实际编译之前就被处理了
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

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	Entity e = "1111";

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
