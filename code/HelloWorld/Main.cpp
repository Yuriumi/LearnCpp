#include <iostream>	// Ԥ������ʵ�ʱ���֮ǰ�ͱ�������
#include <string>
#include "Log.cpp"

struct Vector2
{
	float x, y;

	Vector2(float x, float y)
		:x(x),y(y){}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	Vector2 Multipy(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	} 

	Vector2 operator*(const Vector2& other) const
	{
		return Multipy(other);
	}

	bool operator==(const Vector2& other)
	{
		return x == other.x && y == other.y;
	}

	bool operator!=(const Vector2& other)
	{
		return !(*this == other);
	}
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << other.y;
	return stream;
}

int main()	// main�����ǳ�������,main�����ķ���ֵ������ģ���Ĭ������·���0
{
	Vector2 position(0.0f, 0.0f);
	Vector2 speed(.5f, .5f);

	Vector2 move = position + speed;
	LOG(move.x << move.y);
	LOG(move);

	std::cin.get();	// cin/cout ���Ǻ���,���������������
}
