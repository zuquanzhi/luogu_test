n = int(input())
count = 1

for i in range(1,n+1):
    for _ in range(n):
        print("{:02d}".format(count), end='')
        count += 1
    print()
print()
num = 1
for i in range(1,n+1):
    print(" "*2*(n-i), end='')
    for _ in range(i):
        print("{:02d}".format(num), end='')
        num += 1
    print()