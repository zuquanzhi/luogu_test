def Local(n):
    return 5*n
def Luogu(n):
    return 3*n+11

n = int(input())
if Local(n) > Luogu(n):
    print("Luogu")
elif Local(n) < Luogu(n):
    print("Local")