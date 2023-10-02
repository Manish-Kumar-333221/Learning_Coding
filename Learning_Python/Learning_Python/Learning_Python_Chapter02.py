# 1. Arithmetic Operators
a = 10
b = 6
print(f"{a} + {b} = {a + b}")
print(f"{a} - {b} = {a - b}")
print(f"{a} * {b} = {a * b}")
print(f"{a} // {b} = {a // b}")
print(f"{a} / {b} = {a / b}")
# Modulo Operator
print(f"{b} % {a} = {b % a}")
# 4.8 % 1.1 --> Returns Decimal Remainder

print("-------------")

# 2. Assignment Operators
c = 9
print(f"c = {c}")
c += 1
print(f"c = {c}")
c -= 2
print(f"c = {c}")
c *= 2
print(f"c = {c}")
c //= 4
print(f"c = {c}")
c /= 1
print(f"c = {c}")
c %= 3
print(f"c = {int(c)}")

print("-------------")

# 3. Comparison Operators
print("64 < 6:",(64 < 6))
print("64 > 6:",(64 > 6))
print("64 == 6:",(64 == 6))
print("64 != 6:",(64 != 6))
print("64 <= 6:",(64 <= 6))
print("64 >= 6:",(64 >= 6))
print("-------------")

# 4. Logical Operators
print("64 > 5 and 64 > 98: " + str(64 > 5 and 64 > 98))
print("-------------")
print("64 > 5 or 64 > 98: " + str(64 > 98 or 64 > 5))
print("-------------")

# 5. Bitwise Operators
print("2 and 3 = " + str(2 and 3))
print("-------------")
# 00110010 (2) (and)
# 00110011 (3)
# ----------------
# 00110010 (2)

print("2 or 3 = " + str(2 or 3))
print("-------------")
# 00110010 (2) (or)
# 00110011 (3)
# ----------------
# 00110011(3)

# printecedence & Associativity
d = 6 * 5 - 34 // 2
'''
Highest printecedence goes to * and /. Then they are evaluated on the basis of left to right associativity
=30-34/2
=30-17
=13
'''
print(d)
print("-------------")

d1 = (((6 * 5)-34)//2)# Through BODMAS of mathematics
print(d1)
print("-------------")

e = 60 // 5 - 34 * 2
'''
= 12-34*2
=12-68
=-56
'''
print(e)
print("-------------")

e1 = 60.0 / (5.0 - (34.0 * 2.0)) # <-----Through BODMAS of mathematics.
print(e1)
print("-------------")

# Quick Quiz 01
x = 28
y = 56
eqn = (x - y) // 2
print(eqn)
print("-------------")

# Quick Quiz 02
A = 3.0
B = 4.0
C = 5.0
eqn1 = ((B * B) - (4 * A * C)) / (2 * A)
print(eqn1)
print("-------------")

# Quick Quiz 03
v = 2.0
u = 4.0
a1 = 6.0
s = 8.0
h = ((v * v) - (u * u)) / (2 * a1 * s)
print(h)
print("-------------")

# Quick Quiz 04
a2 = 7
b1 = 6
d3 = 4
print(a2 * b1 - d3)
print("-------------")

# Quick Quiz 05
a3 = 10
# print(a3++)
# print(++a3)
# print("-------------")

# Quick Quiz 06
y1 = 7
x1 = ++y1 + 8
print(x1)
print("-------------")

# Quick Quiz 06
a4 = 'A'
# print(++a4)
# print("-------------")