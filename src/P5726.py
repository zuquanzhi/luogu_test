n=int (input())
arr = list(map(int, input().split()))
arr.sort()
result=sum(arr)-arr[0]-arr[-1]
print(round(result/(n-2),2))