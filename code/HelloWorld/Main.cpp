#include <iostream>	// 预处理，在实际编译之前就被处理了
#include <string>
#include "Log.cpp"

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	int player_Level = 1;

	std::string game_Rank = player_Level > 1 ? "Master" : "Beginner";

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
