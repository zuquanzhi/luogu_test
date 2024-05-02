n, k = map(int, input().split())
arr = []
brr = []
for i in range(1, n+1):
    if i % k == 0:
        arr.append(i)
    else:
        brr.append(i)

aver1 = round(sum(arr) / len(arr), 1) if arr else 0
aver2 = round(sum(brr) / len(brr), 1) if brr else 0

print(aver1, aver2)