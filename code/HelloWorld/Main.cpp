#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
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

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	Player player;

	player.Move(5, 5);

	LOG(player.x);
	LOG(player.y);

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
