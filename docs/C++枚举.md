# 枚举

枚举只是将一些特定值进行命名的一种方式,最大的好处是他是已经归类好的了.

```cpp
enum Example // 默认为Int类型的几何A = 0, B = 1, ...
{
    A, B, C
};

Example value = B;

if (value == B)
{
    // Do something here
}
```

```cpp
enum Example : unsigned char
{
    A = 65, B, C
}
```

我们也可以更改其类型(类型必须为整数,例如 float 是不可行的).

我们可以修改完善 Log 类了.

```cpp
enum Level
{
    Error = 0, Warning, Info
};
```

```cpp
enum Level
{
    Error = 0, Warning, Info
};
```

枚举并不是命名空间,不可以通过`::`访问其成员,它只属于所在的类.
