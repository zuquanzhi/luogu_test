n, m, k = map(int, input().split())

def illuminate(arr, x, y, light):
    for dx in range(-2, 3):
        for dy in range(-2, 3):
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                if (light == 1 and abs(dx) + abs(dy) <= 2) or light == 2:  # 火把或萤石
                    arr[nx][ny] = 1

arr = [[0 for _ in range(n)] for _ in range(n)]
for _ in range(m):
    x, y = map(int, input().split())
    illuminate(arr, x - 1, y - 1, 1)
for _ in range(k):
    x, y = map(int, input().split())
    illuminate(arr, x - 1, y - 1, 2)

count = sum(row.count(0) for row in arr)
print(count)
# 定义了一个函数 illuminate，它接受一个二维数组 arr、一个位置 (x, y) 和一个光源类型 light。然后它遍历 (x, y) 的周围的格子，如果这个格子在 arr 的范围内，并且满足火把或萤石的照亮条件，那么它将这个格子的值设置为 1，表示这个格子被照亮了。

# 然后我读取每个火把和萤石的位置，并调用 illuminate 函数来照亮相应的格子。

# 最后，我计算 arr 中值为 0 的元素的数量，也就是没有被照亮的格子的数量，并将这个数量打印出来。