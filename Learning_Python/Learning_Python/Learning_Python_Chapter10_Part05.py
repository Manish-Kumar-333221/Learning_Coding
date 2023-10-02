class Employee:
	employeeOf = "Python"
	def data(self):
		print(f'''ID of Employee at "{self.employeeOf}" is "{self.employeeID}" and salary is "{self.salary}"''')
	
	@staticmethod
	def sum(a, b):
		print(f"{a} + {b} = {a + b}")

	def greet():
		print("Hello Python")

A = Employee()
A.salary = 80000
A.employeeID = 1

B = Employee()
B.employeeOf = "Java"
B.salary = 90000
B.employeeID = 2

A.data()
A.sum(10, 10)

print()

B.data()
B.sum(10, 10)

print()

Employee.data(B)
Employee.sum(10, 10)
Employee.greet()