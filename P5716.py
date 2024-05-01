def Leap(n):
    if n% 100==0:
        return int (n%400==0)
    else:
        return int(n%4==0)
y,m=map(int,input().split())
if m==2:
    print(29 if Leap(y) else 28)
elif m in [4,6,9,11]:
    print(30)
else:
    print(31)