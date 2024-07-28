# This关键字

我们可以通关this关键字访问当前对象的成员.

`this`在一个`const`函数中,this的本质是`const Entity* const`或是`const Entity*`,在一个非const函数中他就是一个`Entity*`类型的.

```cpp
class Example
{
private:
    int x, y;

public:
    Example(int x, int y)
    {
        /*x = x
            y = y 我们实际上并没有完成初始化操作,只是将其自身的值重新赋值给自身,
            相当于啥也没干*/

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
        const Example& e = *this;   // 解引this
        std::cout << e.GetX() << std::endl;
    }
};
```
