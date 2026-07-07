# 排序方法总结

这个文件用来总结目前练过或刚接触的排序方法。

目前重点掌握：

1. 冒泡排序
2. 选择排序
3. qsort 排序

## 1. 冒泡排序

核心思想：

每一轮从前往后比较相邻两个元素，如果顺序不对就交换。

如果要从小到大排序：

```cpp
if (a[j] > a[j + 1])
```

如果要从大到小排序：

```cpp
if (a[j] < a[j + 1])
```

从小到大排序框架：

```cpp
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - 1 - i; j++)
    {
        if (a[j] > a[j + 1])
        {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
}
```

特点：

- 好理解。
- 速度慢。
- 时间复杂度是 O(n^2)。

## 2. 选择排序

核心思想：

每一轮从剩下的元素里找出最大值或最小值，放到当前位置。

从大到小排序框架：

```cpp
for (int i = 0; i < n; i++)
{
    int maxIndex = i;

    for (int j = i + 1; j < n; j++)
    {
        if (a[maxIndex] < a[j])
        {
            maxIndex = j;
        }
    }

    int temp = a[i];
    a[i] = a[maxIndex];
    a[maxIndex] = temp;
}
```

特点：

- 比冒泡排序更像“每轮选一个最值”。
- 写法清楚。
- 速度也慢。
- 时间复杂度是 O(n^2)。

## 3. qsort 排序

`qsort` 是 C 语言提供的通用排序函数。

使用它需要：

```cpp
#include <stdlib.h>
```

调用格式：

```cpp
qsort(数组名, 元素个数, 每个元素大小, 比较函数);
```

例如对 `ElementType` 数组从大到小排序：

```cpp
int cmp_desc(const void *a, const void *b)
{
    ElementType x = *(const ElementType *)a;
    ElementType y = *(const ElementType *)b;

    if (x < y) return 1;
    if (x > y) return -1;
    return 0;
}
```

使用：

```cpp
qsort(A, N, sizeof(ElementType), cmp_desc);
```

名字解释：

- `cmp` 是 compare，表示比较。
- `desc` 是 descending，表示降序。
- `cmp_desc` 就是“降序比较函数”。

特点：

- 比冒泡排序、选择排序快很多。
- 适合数据量大的题目。
- 写法比普通循环难，新手阶段可以先当固定模板记。

## 什么时候用哪种

数据量很小，比如 N 不超过 10：

```text
冒泡排序、选择排序都可以。
```

数据量可能很大：

```text
不要用 O(n^2) 排序，优先用 qsort 或 C++ sort。
```

PTA 函数题如果裁判程序是 C 风格：

```text
优先考虑 qsort。
```

C++ 编程题：

```text
以后可以学习 sort。
```

## 常见错误

交换变量时忘记定义 `temp`：

```cpp
int temp = a[i];
```

数组下标越界：

```cpp
j + 1
```

出现 `j + 1` 时，循环条件通常不能写到 `j < n`，而要写成：

```cpp
j < n - 1
```

把赋值 `=` 写成判断：

```cpp
if (a[i] = a[j])   // 错
if (a[i] == a[j])  // 判断相等
```

比较函数返回值方向写反：

```cpp
// 从大到小
if (x < y) return 1;
if (x > y) return -1;
```
