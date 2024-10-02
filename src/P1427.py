arr = list(map(int, input().split()))
count = len(arr)-1
for i in range (1,len(arr)+1):
    if arr[count] != 0:
        print(arr[count], end=' ')
    count -= 1