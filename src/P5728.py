n=int(input())
grade=[[0]*3 for _ in range(n)]
count = 0
for i in range(n):
    grade[i] = list(map(int, input().split()))

for i in range(n):
    for j in range (i+1,n):
        if all(abs(grade[i][k]-grade[j][k]) <= 5 for k in range(3)) and abs(sum(grade[i]) - sum(grade[j])) <= 10:
            count += 1
print(count)
# 新知识点： all()函数