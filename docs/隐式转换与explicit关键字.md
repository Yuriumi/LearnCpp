# 隐式转换与 explicit 关键字

## 隐式转换

隐式转换只能进行一次.

```cpp
Entity entity_1(22);
Entity entity_2 = 22;

Entity entity_a("cherno");
// Entity entity_b = "cherno";ERROR : 隐式转换只能进行一次
Entity entity_b = std::string("cherno");
```

我们应该避免这样使用隐式转化,它使代码的可读性大幅度降低.

## explicit 关键字

- `explicit` 关键字禁止了编译器的隐式转换.
- 数学运算中会常常使用;防止数字和向量进行比较.

```cpp
class Entity
{
    explicit Entity(bool attack)
        : m_Name("Unknow"), m_Age(-1), m_Attack(0) {}
};

int main()
{
    Entity e1(true);
    Entity e2 = "114514"; // ERROR : explicit关键字禁止了隐式转换
}
```
