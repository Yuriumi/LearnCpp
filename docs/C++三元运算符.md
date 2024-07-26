# 三元运算符

```cpp
int player_Level = 2;
std::string game_Rank;

// 通常方法
if (player_Level > 1)
    game_Rank = "Master";
else
    game_Rank = "Beginner";

// 三元运算符
game_Rank = player_Level > 1 ? "Master" : "Beginner";
```

三元运算符可以让代码更简洁,运行速度更快.

三元运算符可以进行嵌套,但不推荐这么做,这么做会使代码的简洁性被破坏,就失去了使用三元运算的的意义.
