def num(n,a,b):
    if n%a==0:
        return n//a*b
    else:
        return (n//a+1)*b
n=int (input())
a,b=map(int,input().split())
c,d=map(int,input().split())
e,f=map(int,input().split())
num1=num(n,a,b)
num2=num(n,c,d)
num3=num(n,e,f)
print(min(num1,num2,num3))