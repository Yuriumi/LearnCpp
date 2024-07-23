# 局部静态

- 变量的生命周期指的是变量从创建到销毁之间的时间.
- 作用域指的是变量的可访问范围.

局部静态变量允许我们声明一个变量,它的生命周期相当于整个程序的生命周期,然而他的作用域却是局部的.

```cpp
void Function()
{
    static int i = 0;
    i++;
    LOG(i);
}

Function();
Function();
Function();

// 输出结果为1,2,3
```

典型的案例还有单例类(该类有且只有一个实例)

```cpp
// 不使用局部静态
class Singleton
{
private:
    static Singleton* s_Instance;
public:
    static Singleton& Get() { return *s_Instance; }
};

Singleton* Singleton::s_Instance = nullptr;
```

```cpp
// 用局部静态
class Singleton
{
public:
    static Singleton& Get()
    {
        static Singleton instance;
        return instance;
    }
};
```
