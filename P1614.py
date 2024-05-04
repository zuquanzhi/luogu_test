n,m=map(int,input().split())
arr=[]
brr=[]
for i in range (n):
    arr.append(int (input()))
for j in range (n-m+1):
    sum = 0
    for _ in range (j,j+m):
        sum+=arr[_]
    brr.append(sum)
print(min(brr))