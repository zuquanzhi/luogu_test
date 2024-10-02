def apple(n):
    if n==1:
        return 1
    if n>1:
        return 2
    else:
        return 0
n=int(input())
if not apple(n)==2:
    print("Today, I ate" ,n ,"apple.")
else:
    print("Today, I ate" ,n, "apples.")