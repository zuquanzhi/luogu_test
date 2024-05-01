a,b,c=map(int,input().split())
arr=sorted([a,b,c])
string=input()
if string=='ABC':
    print(arr[0],arr[1],arr[2])
if string=='ACB':
    print(arr[0],arr[2],arr[1])
if string=='BAC':
    print(arr[1],arr[0],arr[2])
if string=='BCA':
    print(arr[1],arr[2],arr[0])
if string=='CAB':
    print(arr[2],arr[0],arr[1])
if string=='CBA':
    print(arr[2],arr[1],arr[0])
# 未通过