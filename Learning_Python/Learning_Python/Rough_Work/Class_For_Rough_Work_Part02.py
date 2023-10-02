import Class_For_Rough_Work_Part01

print("10 + 10 = " + str(Class_For_Rough_Work_Part01.sum(10, 10)) + "\n")

import Class_For_Rough_Work_Part01 as C

print("10 + 10 =", C.sum(10, 10), "\n")

from Class_For_Rough_Work_Part01 import sum

print("10 + 10 =", sum(10, 10), "\n")

from Class_For_Rough_Work_Part01 import sumClass as sC
print("10 + 10 =", sC.sum(10, 10))
Num = sC()
Num.one = 10
Num.two = 20
print(f"10 + 20 = {sC.sum(Num.one, Num.two)}")
print(f"10 + 20 = {Num.sum(Num.one, Num.two)}")