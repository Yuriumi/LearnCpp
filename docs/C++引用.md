# 引用

是引用现有变量的一种方式,他们并不占用内存;可以理解为变量访问的快捷方式(语法糖).

编译器在编译时会将引用优化成对应的变量.

声明一个引用时,应立即对其进行初始化.

```cpp
int a = 5;
int& ref_a = a;

ref_a = 2;
```

```cpp
void Increment(int value)
{
    value++;
}

int main()
{
    Increment(a);
    std::cout << a << std::endl;
}
```

上述案例的操作是将变量`a`的值赋予新的变量 value,累加操作作用的是`value`;如果我们想对变量 a 进行累加第一种方法是我们可以使用指针.

```cpp
void PointIncrement(int* value)
{
    (*value)++;
}
```

可以看出使用指针的方法很麻烦也不利于增强代码的可读性,使用引用可以更好的解决问题.

```cpp
void RefIncrement(int& value)
{
    value++;
}
```
