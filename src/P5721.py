n = int(input())
count = 1
for i in range(n, 0, -1):
    for _ in range(i):
        print("{:02d}".format(count), end='')
        count += 1
    print()