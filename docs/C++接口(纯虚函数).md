# 接口(纯虚函数)

纯虚函数强制子类实现基类的纯虚函数.

含有纯虚函数的类称为**抽象类**,他不能直接创建实例.

声明方法

```cpp
virtual void Function() = 0;
```

- C++中纯虚函数本质上与其他语言(C#)中的抽象方法或接口相同.
- 纯虚函数与虚函数的区别在于只声明,但不实现;实现交给派生类来做.
- 继承纯虚函数所在的类的派生类必须实现所有的虚函数,否则将无法实例化.
- 其他语言有 interface 关键字,但 C++没有,接口只是 C++的类而已.
- 接口只是一个不包含函数实现的类,被当作模板类使用,所以我们无法创建他的实例.

```cpp
class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
public:
    std::string GetClassName() override { return "Player"; }
};

Printable* e = new Entity();
Printable* p = new Player();

PrintName(e);
PrintName(p);

// 输出结果
Entity
Player
```
