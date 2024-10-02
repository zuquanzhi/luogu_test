def func(m,h):
    return m/h/h

m, h = map(float, input().split())
bmi = func(m, h)

if bmi < 18.5:
    print("Underweight")
elif bmi < 24:
    print("Normal")
else:
    print("{:.6g}".format(bmi))
    print("Overweight")