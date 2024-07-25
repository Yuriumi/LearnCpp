# 字符串

字符串的本质是字符数组.

C++中双引号`""`中的即为字符串`const char*`,使用`char*`创建字符串编译器会自动在字符串末尾添加 0(空终止符),而`cout`遇到空终止符就会停止输出.

![m](https://github.com/Yuriumi/Cherno_Cpp/raw/master/img/memory3.jpg)

红色为字符串以及对应的 ASCII 码,绿色为 Debug 模式下编译器插入守卫字符.

## std::string

引入`#include<string>`

- C++标准库里有个类叫`string`,实际上还有一个模板类`basic_string;std::string`本质上就是这个`basic_string`的`char`作为模板参数的模板类实例,叫模板特化;就是把`char`作为模板类`basic string`的模板参数，意味着`char`就是每个字符背后的的数据类型
- `string`有个参数接收`char`指针或者`const char`指针的构造函数.
- `std::string`的本质就是一个`char`数组和一些内置的函数.

```cpp
// 基本使用
std::string name = "Cherno";
LOG(name.size());
```

## 追加字符串

```cpp
// ERROR
std::string m_name = "Cherno" + "Hello!";
bool contains = name.find("no") != std::string::npos;
```

上述案例的本质是两个字符串常量相加,常量是不可修改的,所以遍历器会报错,他们并不是真正的`string`.

```cpp
// 解决方法 1
std::string m_name = "Cherno";

m_name += "Hello!";
// 解决方法 2
std::string m_name = srd::string("Cherno") + "Hello!";
```

## string 的其他用法

```cpp
// 查找字符串
bool contains = m_name.find("no") != std::string::npos;
```

## 字符串字面量

- 双引号内的就是字符串字面量
- 字符串字面量是存储在内存中的只读部分,不可对只读数据进行操作.
- 避免使用非`const char*`之外的字符串创建方式,不能舍弃`const`

上述案例中两个语句都是错误的,这里我们主要分析第二句;这是一个未定义行为,你正在对一个指针指向的只读的数据进行修改.

如果我们想修改字符串我们要在定义时将其定义为数组而不是指针.

```cpp
char name[] = "Cherno";

name[2] = 'a';
```

其他的字符串类型

> char 是一个字节的字符,char16_t 是两个字节(16bit)的字符(utf16),char32_t 是四字节的字符(utf32),const char 就是 utf8,wchar_t 和 char16_t 的区别在于,宽字符所占的内存大小由编译器决定,可能是 1 字节也可能是 2 字节甚至 4 字节,通常情况下不是 2 字节就是 4 字节.

```cpp
const char* name = "cherno";
const wchar_t* name = L"cherno";
const char16_t* name = u"cherno";
const char32_t* name = U"cherno";
const char* name = u8"cherno";
```

## 在 C++14

引入`using namespace std::string_literals;`

他给出了一些方便的字符串函数.

```cpp
// 字符串拼接
std::string name = "Hello"s + "World!";
```

这里字符串字面量后面加上 s,他是一个操作符函数,它实际上会返回一个标准的字符串对象`(std::string)`

```cpp
// 忽略转义字符
const char* example = R"(line1)
line2
line3"
```
