# Const

`const`关键字不能在代码层面改变什么,他只是一个承诺

## 指针常量与常量指针

### 指针常量

不能修改指针指向的内存地址;在定义的同时必须初始化.

```cpp
int const* a = new int;
*a = 1;// ERROR : 不能修改指针指向的地址
a = &b;
```

```cpp
const int* a = new int;
*a = 2; // ERROR : 不能修改指针指向的内存地址
a = &b;
```

### 常量指针

常量指针（Constant Pointer）是指指针本身是一个常量，一旦被初始化之后就不能再指向其他地址，但可以修改它所指向的对象的值。

```cpp
int *const ptr;
```

## 常量指针常量

指针本身和它所指向的对象都是常量。这意味着既不能改变指针所指向的地址，也不能修改它所指向的对象的值。

```cpp
const int *const ptr;
int const *const ptr;
```

## const 在类与方法中的应用

```cpp
class Entity
{
private:
    int X{10}, Y{10};

public:
    int GetX() const
    {
      // 该函数内不可以修改成员变量
        return X;
    }

    void SetX(int x)
    {
        X = x;
    }
};

void PrintEntity(const Entity& e)
{
    // e.Set();	ERROR
    LOG(e.GetX());
}

int main()
{
    Entity e;
    PrintEntity(e);
}
```

在类中的方法后加上`const`关键字,保证我们不会对类中的成员变量进行修改.

```cpp
int GetX() const
{
    X = 10; // ERROR
    return X;
}
```

在方法的参数类表中使用;我们只能调用实例中带有 `const` 关键字的方法.

有的时候我们会为 `Get()`方法设置两个版本;带 `const` 关键字,不带 `const` 关键字.

如果想让带有 `const` 关键字的方法修改变量,可以在允许修改的变量前使用 `mutable` 关键字标记成员变量.
