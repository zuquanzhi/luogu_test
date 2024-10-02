n = int(input())
arr = [[0 for _ in range(n+1)] for _ in range(n+1)]
for i in range(n+1):
    arr[i][0] = arr[i][i] = 1
    for j in range(1, i):
        arr[i][j] = arr[i-1][j-1] + arr[i-1][j]

for i in range(n):
    for j in range(i+1):
        print(arr[i][j], end=' ')
    print()