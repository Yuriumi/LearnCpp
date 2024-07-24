#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include "Log.cpp"

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
	Log log;
	log.SetLevel(Log::Info);
	log.LogInfo("error!");
	log.LogWarn("error!");
	log.LogError("error!");

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
