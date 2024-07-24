# 数组

- C++数组是表示一堆相同类型变量的集合.
- 在 Debug 模式下 C++会对数组越界行为进行提示,但在 Release 模式下,这意味着我们已经对不属于这个数组所在的内存进行修改了.

```cpp
int a[5];

// 数组越界
a[5];
a[-1];
```

```cpp
int example[5];

for (int i = 0; i < 5; i++)
    example[i] = 2;
```

我们通常使用循环来修改或访问数组.

- 数组的本质是整数指针(一个内存地址).
- 数组数据的存储在内存中是连续的

```cpp
int example[5];
int* ptr = example;

for (int i = 0; i < 5; i++)
  example[i] = 2;

*(ptr + 2) = 5;
LOG(*(ptr + 2));  // 字节的偏移量计算

*(int*)((char*)ptr + 8) = 7;
LOG(*(int*)((char*)ptr + 8));

// 输出结果
5
7
```

上述案例可以很好的证明数组的本质是整数类型的指针.

## 栈数组与堆数组

!!!warning 如果想返回函数内的数组,我们需要使用`new`关键字在堆上创建.

在堆上创建数组的好处是除非**程序结束**,或是**手动删除**,否则数组会一直存在在内存中.

### 内存间接寻址

指针指向另一个保存着数据的地址(p->p->data).

我们在栈上创建数组,是内存直接寻址,我们可以直接查找到数据.

```cpp
class Entity
{
public:
    int example[5]; //栈数组
    Entity()
    {
        for (int i = 0; i< 5;i++)
             example[i] = 2;
    }
};

int main()
{
    Entity e;

    std::cin.get();
}
```

![memony](https://github.com/Yuriumi/Cherno_Cpp/raw/master/img/memory1.jpg)

然而我们在堆上创建数组时,是内存间接寻址,我们先是查找到存储数据的地址,再根据地址查找到数据.

```cpp
class Entity
{
public:
    int* example = new int[5];  //堆数组
    Entity()
    {
        for (int i = 0; i< 5;i++)
             example[i] = 2;
    }
};

int main()
{
    Entity e;

    std::cin.get();
}
```

![m](https://github.com/Yuriumi/Cherno_Cpp/raw/master/img/memory2.jpg)

该内存存储的是数据存放的地址.

内存中查找上述地址可以找到数据.

## C++中的 std::array

他是 C++11 标准库中的数据类型,很多人喜欢使用他来代替原生的数组,因为它可以记录数组大小以及边界检查.

实际上我们没有办法计算原生数组的大小,但可以通过一些办法知道大小(例如因为当你删除这个数组时,编译器要知道实际上需要释放多少内存).

## 计算原生数组的元素个数

永远都不要在数组内存中访问数组的大小,这很危险.

- 栈数组

```cpp
int count = sizeof(a) / sizeof(int);
// 当int* a = new int[5]时,我们得到的结果为1,显然是不正确的
```

- 堆数组

在对堆数组进行相同的方法进行计算时,实际上得到的是指针的大小.

所以这个方法只适用于位于栈上的数组,但你不能永远相信这个方法.
