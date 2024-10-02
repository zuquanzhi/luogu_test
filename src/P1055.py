s = input()
code = [int(x) for x in s if x.isdigit()]
last_digit = code[-1]
code = code[:-1]

sum = 0
for i in range(9):
    sum += code[i] * (i + 1)

num = sum % 11
if num == 10:
    num = 'X'
else:
    num = str(num)

if num == str(last_digit):
    print(s)
else:
    s = s[:-1] + num
    print(s)
#未通过