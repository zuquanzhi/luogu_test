n = int(input())
arr = [[0]*n for _ in range(n)]
dx, dy = [0, 1, 0, -1], [1, 0, -1, 0]  # 方向向量
x, y, c = 0, -1, 1  # 初始化坐标和计数器
for i in range(n + n - 1):
    for j in range((n + n - i) // 2):  # 每个方向上的步数
        x += dx[i % 4]
        y += dy[i % 4]
        arr[x][y] = c
        c += 1
for i in range(n):
    print(''.join(f'{num:3d}' for num in arr[i]))

#注意：3d