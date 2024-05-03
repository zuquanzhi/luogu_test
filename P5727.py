n=int(input())
arr=[]
while(n!=1):
    if n%2==0:
        arr.append(n)
        n//=2
    else:
        arr.append(n)
        n=n*3+1
arr.append(1)
for i in range (len(arr)-1,-1,-1):
    print(arr[i], end=' ')