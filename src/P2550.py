n=int (input())
arr = list(map(int, input().split()))
res=[0]*8
for i in range(0,n):
    brr=list(map(int, input().split()))
    count=len(set(arr).intersection(set(brr)))
    res[count]+=1
print(' '.join(map(str, res[-7:][::-1])))