def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True
# def isRepeat(n):
#     return str(n) == str(n)[::-1]
# 超时了，真狗屎啊
def isPalindrome(n):
    original = n
    reversed = 0
    while n > 0:
        reversed = reversed * 10 + n % 10
        n //= 10
    return original == reversed
a,b=map(int,input().split())

for i in range(a,b+1):
    if isPrime(i) and isPalindrome(i):
        print(i)


