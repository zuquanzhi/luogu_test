def func(n):
    if n% 100==0:
        return int (n%400==0)
    else:
        return int(n%4==0)
n=int(input())
print(func(n))