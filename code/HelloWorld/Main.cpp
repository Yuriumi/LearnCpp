#include <iostream>	// 预处理，在实际编译之前就被处理了
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

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	Log log;
	log.SetLevel(Log::Info);
	log.LogInfo("error!");
	log.LogWarn("error!");
	log.LogError("error!");

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
