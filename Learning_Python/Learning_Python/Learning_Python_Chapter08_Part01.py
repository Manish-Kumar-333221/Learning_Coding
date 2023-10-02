def printSum(a, b):
	print(f"{a} + {b} = {a + b}\n" )

printSum(57, 36)

def sum(a, b):
	return a + b

print(f"68 + 48 = {sum(68, 48)}\n")

def printMul(a, b):
	print(f"{a} * {b} = {a * b}\n" )

printMul(10, 76)

def mul(a, b):
	return a * b

print(f"5 * 5 = {mul(5, 5)}\n")

def greet(name = "Stranger"):
	print(f"Hello {name}!\n")

greet("Python")
greet()

def factorial(fac):
	if fac == 1 or fac == 0:
		return 1
	return (fac * factorial(fac - 1))

print(f"Factorial of 5 is: {factorial(5)}\n")

def pattern(num):
	if num < 1:
		return
	print(num * "* ")
	pattern(num - 1)

pattern(5)

print()

def pattern(num):
	if num < 1:
		return
	pattern(num - 1)
	print(num * "* ")

pattern(5)

print()

def Multiply(num, m = 1):
	if m > 10:
		return
	print(f"{num} * {m} = {num * m}")
	Multiply(num, m + 1)

Multiply(17)

print()

def Multiply(num, m = 10):
	if m < 1:
		return
	print(f"{num} * {m} = {num * m}")
	Multiply(num, m - 1)

Multiply(17)