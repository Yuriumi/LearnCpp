# 指针

一个指针,只是一个内存地址,仅此而已!

```cpp
int var = 8;

void\* ptr = 0; // 表示空指针,0 对于内存地址是无效的
ptr = NULL;
ptr = nullptr;

ptr = &var; // 使用&获取变量的内存地址

std::cout << *ptr << std::endl; // 使用*访问指针存储的对象
int var = 5;

void* ptr = &var;
*ptr = 10; // 错误的,编译器无法知道指针类型,为变量分配内存

int* ptr = var;
*var = 10;
```

指针不是数据,我们不知道指针的大小.

```cpp
char\* buffer = new char[8];
memset(buffer, 0 ,8); // 为该指针指向的内存区域 8 个字节填充数据,数据为 0.
```

这个语句向系统申请了 8 个字节的空间,并返回一个指向那块内存开始的指针.

char\*\* ptr = &buffer;
双指针,指向另一个指针;指针本身是变量(对象).
