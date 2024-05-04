a,b=map(int,input().split())
num=[0]*10
for i in range (a,b+1):
    for j in str(i):
        num[int(j)]+=1
print(*num)
