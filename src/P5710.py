def ans(n):
    return n % 2 == 0

def bns(n):
    return 4 <= n <= 12

x = int(input())

a = int(ans(x) and bns(x))
b = int(ans(x) or bns(x))
c = int(ans(x) ^ bns(x))
d = int(not (ans(x) or bns(x)))
print(a, b, c, d)