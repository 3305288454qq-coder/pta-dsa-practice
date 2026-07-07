# PTA 数据结构与算法练习

这个文件夹用来保存 PTA 基础题练习代码。

## 推荐流程

1. 打开 VS Code。
2. 打开这个文件夹：`D:\Data structure and algorithm practice`
3. 每做一道题，就从 `templates/cpp_template.cpp` 复制一份到 `problems` 文件夹。
4. 文件名建议写成：`题号_题目简名.cpp`
   例如：`1001_A_plus_B.cpp`
5. 写完后先在本地运行，确认样例通过，再提交到 PTA。

## 编译和运行

在 VS Code 里打开某个 `.cpp` 文件后：

- 按 `Ctrl + Shift + B` 可以编译当前文件。
- 也可以在终端里手动运行：

```powershell
g++ -std=c++17 -Wall -Wextra -O2 .\problems\000_hello.cpp -o .\problems\000_hello.exe
.\problems\000_hello.exe
```

## PTA 写题习惯

- 先读清楚输入是什么。
- 再读清楚输出是什么。
- 先用样例测试。
- 不要在最终提交代码里输出多余提示文字，比如 `please input`。
- 每道题保留一个单独文件，方便以后复习。

## 目前建议使用 C++

PTA 上 C 和 C++ 都很常见。你电脑已经装好了 `g++`，所以我们先用 C++ 入门。
如果你的课程要求必须用 C，我也可以帮你切换成 C 的模板。
