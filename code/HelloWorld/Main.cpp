#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include <string>
#include "Log.cpp"

class Entity 
{
	std::string m_name;
};

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	int* a = new int;
	int* b = new int[50];

	delete a;
	delete[] b;

	Entity* e1 = new Entity;
	Entity* e2 = new Entity[50];

	delete e1;
	delete[] e2;

	// �����ڴ�
	Entity* e = new Entity;
	Entity* e3 = (Entity*)malloc(sizeof(Entity));
	delete e;
	delete e3;

	int* d = new int[50];
	Entity* e4 = new(d) Entity;

	delete e4;
	delete d;

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
