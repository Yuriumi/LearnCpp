#include <iostream>	// 预处理，在实际编译之前就被处理了
#define LOG(x) std::cout << x << std::endl

class Player
{
public:
	int x{1}, y{1};
	int speed{5};

	void Move( int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

void Move(Player& player,int xa, int ya)
{
	player.x += xa * player.speed;
	player.y += ya * player.speed;
}

struct Vec2
{
	float x, y;

	void Add(Vec2& vec2) {
		x + vec2.x;
		y + vec2.y;
	}
};

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	Player player;

	player.Move(5, 5);

	LOG(player.x);
	LOG(player.y);

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
