class Employee:
	def __init__(self):
		print("Hello Pyhton")

A = Employee()

print()

class NewEmployee:
	def __init__(self, num1, num2):
		self.num1 = num1
		self.num2 = num2

	def getNum(self):
		print(f"num1 = {self.num1}")
		print(f"num2 = {self.num2}")
		print(f"{self.num1} + {self.num2} = {self.num1 + self.num2}")

B = NewEmployee(50, 60)
B.getNum()