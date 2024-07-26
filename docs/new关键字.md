# new 关键字

- new 关键字负责寻找空闲内存进行分配,并调用对象的构造函数.
- 如果你使用 new 关键字来为数组分配内存,记得使用 delete[]关键字来清除内存.
- new 关键字返回的是对象所在内存的地址而不是对象本身.

```cpp
int* a = new int;
// 分配4字节的空间
int* b = new int[50];
// 分配4 * 50字节的内存空间

delete a;
delete[] b;

Entity* e1 = new Entity;
// 我们不需要使用括号,因为它有默认的构造函数
Entity* e2 = new Entity[50];

delete e1;
delete[] e2;
```

```cpp
Entity* e = new Entity();
// 使用malloc关键字分配内存,然后返回给我们空类型的内存地址
Entity* e = (Entity*)malloc(sizeof(Entity));
// new关键字调用了对象的构造函数,malloc关键字只是为对象分配了内存,但没有调用对象的构造函数.
delete e;
```

`new`的本质是像'+','-','\*',...一样的关键字(操作符),这意味着你可以对他进行重载,改变他的定义.

new 支持一种`placement new`的用法,它可以让开发者决定对象的内存来自哪里,这个过程中你并没有真正的分配内存.

```cpp
int* b = new int[50];
Entity* e = new(b) Entity();
```
