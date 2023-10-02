class Number:
	def __init__(self, num):
		self.num = num

	def __add__(self1, self2):
		print("Adding Number")
		return self1.num + self2.num

	def __sub__(self1, self2):
		print("Subtracting Number")

	def __mul__(self1, self2):
		print("Multiply Number")
		return self1.num * self2.num

	def __truediv__(self1, self2):
		print("Dividing Number")
		return self1.num / self2.num

	def __floordiv__(self1, self2):
		print("Dividing Number")
		return self1.num // self2.num

num1 = Number(10)
num2 = Number(5)

print(num1 + num2)
print(num1 - num2)
print(num1 * num2)
print(num1 / num2)
print(num1 // num2)