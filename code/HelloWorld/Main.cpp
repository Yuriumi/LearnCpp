#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include "Log.cpp"

class Entity
{
public:
	int X, Y;

	Entity(int x, int y)
	{
		X = x;
		Y = y;
	}

	void Print()
	{
		LOG(X << ',' << Y);
	}

	~Entity()
	{
		LOG("Delte!");
	}

};

class M_LOG
{
public:
	M_LOG() = delete;

	static void Write()
	{

	}
};

void Function()
{
	Entity e(10, 5);
	e.Print();
}

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	Function();

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
