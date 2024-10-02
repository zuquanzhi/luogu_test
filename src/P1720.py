def fibonacci(n):
    fib = [0, 1] + [0] * (n - 1)
    for i in range(2, n + 1):
        fib[i] = fib[i - 1] + fib[i - 2]
    return fib[n]

a = int(input())
res = fibonacci(a)
print(f"{res:.2f}")

#这里刚开始我使用的递归，但是时间复杂度是指数级别的，超时了，改成动态规划
# 这段代码的主要目的是计算斐波那契数列的第n项，并将结果保留两位小数输出。

# fib = [0, 1] + [0] * (n - 1)` 创建了一个列表 `fib`，它的前两个元素是斐波那契数列的前两个数，其余元素都初始化为 0。
# `for i in range(2, n + 1):` 从 2 开始遍历到 n，计算斐波那契数列的第 i 项。