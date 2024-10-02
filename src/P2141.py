n=int(input())
arr=list(map(int,input().split()))
count =0
arr_dict = {v: i for i, v in enumerate(arr)}
counted = set()
for i in range(n):
    for j in range(i+1, n):
        sum_ij = arr[i] + arr[j]
        if sum_ij in arr_dict and arr_dict[sum_ij] != i and arr_dict[sum_ij] != j and sum_ij not in counted:
            count += 1
            counted.add(sum_ij)
print(count)
# print(arr_dict)
#不能重复计数