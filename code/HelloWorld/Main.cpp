#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include <string>
#include "Log.cpp"

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	int player_Level = 1;

	std::string game_Rank = player_Level > 1 ? "Master" : "Beginner";

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
