# 继承

- 子类包含父类的一切
- 子类是父类的派生类,在子类中我们可以扩充新的变量与函数成员.
- 子类不论是父类的 `privtae`,`public`,`protected` 都会继承;需要注意的是:在子类的各个成员函数中,不能访问父类的 `private` 成员.

```cpp
class 派生类名 : public 基类名
{

};
```

```cpp
class Entity
{
public:
    float X, Y;

    void Move(float Xa, float Ya)
    {
        X += Xa;
        Y += Ya;
    }
};

class Player : public Entity
{
public:
    const char* Name;

    void PrintName()
    {
        LOG(Name);
    }
};
```

在上述例子中

- Player 类不仅仅是 Player 类,他同时也是 Entity 类.,也就是说它同时是两种类型,我们可以在任何使用 Entity 的地方将其替换为 Player.
- Player 总是是 Entity 的超集.
