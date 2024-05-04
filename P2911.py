a, b, c = map(int, input().split())
counts = [0] * (a + b + c + 1)
for i in range(1, a + 1):
    for j in range(1, b + 1):
        for k in range(1, c + 1):
            counts[i + j + k] += 1
max_count = max(counts)
for i in range(len(counts)):
    if counts[i] == max_count:
        print(i)
        break