day = int(input())
sum = 0
eve = 1
i = 1
while i <= day:
    day -= i
    sum += eve * eve
    eve += 1
    i += 1
sum += day * eve
print(sum)
# day = int(input())
# sum = 0
# c = 1
# i = 1
# while i <= day:
#     day -= i
#     sum += c * c
#     c += 1
#     i += 1
# sum += day * c
# print(sum)