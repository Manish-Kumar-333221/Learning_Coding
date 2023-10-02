class Employee:
	employeeOf = "Python"
	def data(self):
		print(f'''ID of Employee at "{self.employeeOf}" is "{self.employeeID}" and salary is "{self.salary}"''')

	def getSalary(self, Name):
		print(f"Salary of {Name} is {self.salary}")

A = Employee()
A.salary = 80000
A.employeeID = 1

B = Employee()
B.employeeOf = "Java"
B.salary = 90000
B.employeeID = 2

A.data()
A.getSalary("A")

print()

B.data()
B.getSalary("B")

print()

Employee.data(B)
Employee.getSalary(B, "B")

print()

class Sample:
	def setNum(slf, num):
		slf.num = num

obj = Sample()
obj.setNum(48)
print(obj.num)