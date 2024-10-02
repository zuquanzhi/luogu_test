def count(n,x):
    count=0
    for i in range(1,n+1):
        count+=str(i).count(str(x))
    return count
a,b=map(int ,input().split())
print(count(a,b))