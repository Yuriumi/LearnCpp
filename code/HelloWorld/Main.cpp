#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#define LOG(x) std::cout << x << std::endl

void function()
{
	static int count{ 0 };
	count++;
	LOG(count);
}

class Singeton
{
private:
	static Singeton* instance;
public :
	static Singeton& Get()
	{
		return *instance;
	}
};

class Entity
{
public:
	static Singeton& Get()
	{
		static Singeton instance;
		return instance;
	}
};

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	function();
	function();
	function();
	function();

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
