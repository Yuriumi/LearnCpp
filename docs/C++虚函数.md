# 虚函数

- 虚函数可以让我们在子类中重写方法
- 虚函数并不是"免费"的,他有额外的性能开销,但除非你为很差的平台编写程序,否则大部分情况下可以无视这些性能开销.

```cpp
class Entity
{
    virtual void Function()
    {

    }
};
```

案例

```cpp
class Entity
{
public:
    std::string GetName() { return "Cherno"; }
};

class Player : public Entity
{
public:
    std::string GetName() { return "Player"; }
};

void PrintName(Entity* entity)
{
    LOG(entity->GetName());
}

Entity* e = new Entity();
PrintName(e);

Player* p = new Player();
PrintName(p);

// 输出结果
Cherno
Cherno
```

这并不是我们希望看到的,按照多态的思想,我们的代码是不合格的.

原因是在于如果我们在类中正常声明函数或方法,当调用这个方法的时候,他总是会调用属于这个类型的方法;它只会在 Entity 的内部寻找和调用 GetName.

为了让我们达到多态的目的,此时虚函数可以处理这种情况.

- 虚函数引入了一种要动态分配的东西,一般通过虚表（vtable）来实现编译;虚表就是一个包含类中所有虚函数映射的列表,通过虚表我们就可以在运行时找到正确的被重写的函数.
- 如果你想重写一个函数,你必须要把基类中的原函数设置为虚函数.

```cpp
class Entity
{
public:
    virtual std::string GetName() { return "Cherno"; }
};

class Player : public Entity
{
public:
    std::string GetName() override { return "Player"; }
};
```

对上面的案例进行如上修改,我们达到了多态的目的.
