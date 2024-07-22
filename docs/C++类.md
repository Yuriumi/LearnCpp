# 类

```cpp
class Player // 一个类不标明可访问性时,默认为私有
{
public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};
```
