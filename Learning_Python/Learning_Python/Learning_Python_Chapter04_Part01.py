age = 20
if (age > 18):
        print("Yes boy you can drive!")
else:
    print("No boy you cannot drive yet!")

    print("-----------------------")
# OR
age1 = 18
cond = (age1 > 18)
if (cond):
    print("Yes boy you can drive!")
else:
    print("No boy you cannot drive yet!")

    print("-----------------------")

    print("For Logical and")
a = True
b = False
if (a == True and b == False):
    print("Yes")
else:
    print("Not")

    print("-----------------------")

a1 = True
b1 = False
if (a1 == True and b1 == True):
    print("Yes")
else:
    print("Not")

    print("-----------------------")

a2 = True
b2 = True
c2 = True
if (a2 and b2 and c2):
    print("Yes")
else:
    print("Not")

    print("-----------------------")
a3 = True
b3 = False
c3 = True
if (a3 and b3 and c3):
    print("Yes")
else:
    print("Not")

    print("-----------------------")

    print("For Logical or")
d = True
e = False
f = True
if (d or e or f):
    print("Yes")
else:
    print("Not")

    print("-----------------------")

d1 = False
e1 = False
f1 = False
if (d1 or e1 or f1):
    print("Yes")
else:
    print("Not")

print("-----------------------")

print("For Logical not")
g = False
print("g = %r"% g)
h = True
print("h = %r"% h)
print("Not g is:", (not g))
print("Not h is:", (not h))