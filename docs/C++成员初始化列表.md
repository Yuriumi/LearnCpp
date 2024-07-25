# 成员初始化列表

成员初始化列表中需要按成员变量定义的顺序写.这很重要,因为不管你怎么写初始化列表,他都会按照定义类的顺序进行初始化.

> 使用成员初始化列表的一大好处是,代码风格简洁,避免性能浪费.

## 在构造函数中初始化类的成员的两种方式

- 使用构造函数,笨笨的一个一个对成员变量进行初始化.
- 使用初始化成员列表

```cpp
class Example
{
private:
    std::string e_Name;

public:
    Example()
    {
        LOG("Creat a example" << e_Name);
    }

    Example(std::string name)
        : e_Name(name)  // 使用冒号后加成员变量的方式进行成员变量的初始化
    {
        LOG("Creat a example " << e_Name);
    }
};
```

我们应该尽可能的使用成员列表进行初始化操作,这不只是习惯上的问题,他还会节省性能的开支.

```cpp
class Example
{
private:
    std::string e_Name;

public:
    Example()
    {
        LOG("Creat a example" << e_Name);
    }

    Example(std::string name)
        : e_Name(name)
    {
        LOG("Creat a example " << e_Name);
    }
};

class Entity
{
private:
    std::string m_Name;
    Example e; // 第一次调用

public:
    Entity()
        : m_Name("Unknow")
    {
        e = Example(); // 第二次调用
    }

    Entity(std::string name)
        : m_Name(name),e(Example("one"))
    {
        // 使用成员初始化列表成功赋值且不调用构造函数.
    }

    void PrintName()
    {
        LOG(m_Name);
    }
};

int main()
{
    Entity e0;

    Entity e1("Cherno");

    std::cin.get();
}

// 输出结果
Creat a example
Creat a example
Creat a example one
```

上例中我们可以看出,使用初始化成员列表可以节省程序在性能上的开支,我们只调用了一遍 Example 的构造函数.
