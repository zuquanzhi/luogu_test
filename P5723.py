def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True
n = int(input())
sum = 0
count = 0
for i in range(1, n + 1):
    if sum + i <= n:
        if isPrime(i):
            sum += i
            print(i)
            count += 1
    else:
        break
print(count)
    