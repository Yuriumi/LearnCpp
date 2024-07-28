#include <iostream>	// 预处理，在实际编译之前就被处理了
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

class Example
{
private:
	int x, y;

public:
	Example(int x, int y)
	{
		this->x = x;
		this->y = y;

		Example* e = this;
		e->x = x;
	}

	int GetX() const
	{
		const Example* e = this;
		return e->x;
	}

	void PrintExample()
	{
		const Example& e = *this;
		std::cout << e.GetX() << std::endl;
	}
};

class ScopPtr
{
private:
	Example* m_Ptr;

public:
	ScopPtr(Example* ptr)
		:m_Ptr(ptr){}

	~ScopPtr()
	{
		LOG(123);
		delete m_Ptr;
	}
};

int main()	// main函数是程序的入口,main函数的返回值是特殊的，在默认情况下返回0
{
	{
		ScopPtr example(new Example(1,1));
	}

	std::cin.get();	// cin/cout 不是函数,是输入输出流对象
}
