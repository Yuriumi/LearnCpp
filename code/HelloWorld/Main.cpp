#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#define LOG(x) std::cout << x << std::endl

extern int s_var;
int var = 10;

struct Entity {
	int a, b;
	static int c, d;

	void Print()
	{
		LOG(a << b);
	}

	static void Print1()
	{
		LOG(c << d);
	}
};

int Entity::c;
int Entity::d;

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	Entity e = { 2,4 };
	e.Print();

	Entity::c = 10;
	Entity::d = 10;
	Entity::Print1();

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
