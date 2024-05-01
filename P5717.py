def Stancle(a,b,c):
    if (a+b>c) and (a+c>b) and (b+c>a):
        return True
    else:
        return False
def Right(a,b,c):
    if (a**2+b**2==c**2) or (a**2+c**2==b**2) or (b**2+c**2==a**2):
        return True
    else:
        return False
def Isosceles(a,b,c):
    if (a==b) or (a==c) or (b==c):
        return True
    else:
        return False
def Equilateral(a,b,c):
    if (a==b) and (a==c) and (b==c):
        return True
    else:
        return False
def Acute(a,b,c):
    if (a**2+b**2>c**2) and (a**2+c**2>b**2) and (b**2+c**2>a**2):
        return True
    else:
        return False
def Obtuse(a,b,c):
    if (a**2+b**2<c**2) or (a**2+c**2<b**2) or (b**2+c**2<a**2):
        return True
    else:
        return False
a,b,c=map(int,input().split())
if Stancle(a,b,c):
    if Right(a,b,c):
        print('Right triangle')
    if Acute(a,b,c):
        print('Acute triangle')
    if Obtuse(a,b,c):
        print('Obtuse triangle')
    if Isosceles(a,b,c):
        print('Isosceles triangle')
    if Equilateral(a,b,c):
        print('Equilateral triangle')
else:
    print('Not triangle')