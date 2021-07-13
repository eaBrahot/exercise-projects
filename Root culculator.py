import math
#A program to culculate roots with Bhaskara’s formula from the given three floating numbers.
a = float(input("please give a number(a)"))
b = float(input("please give a number(b)"))
c = float(input("please give a number(c)"))
#test to check if the delta is positive and can be sqrted
delta = (b*b)-(4*c*a)

if delta >= 0:
#root1, +
    x1 = (-b+math.sqrt(delta))/2*a
    print("ROOT1 = ",x1)

#root2, -
    x2 = (-b-math.sqrt(delta))/2*a
    print("ROOT2 = ",x2)
else :
    print("There is no roots")
