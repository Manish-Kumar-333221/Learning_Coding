class Employee:
	employeeOf = "Python"
	salary = 10000
	employeeID = int

A = Employee()

A.salary = 80000
A.employeeID = 1

B = Employee()
B.employeeOf = "Java"
# B.salary = 90000
B.employeeID = 2

print(A.employeeOf)
print(A.salary)
print(A.employeeID)

print()

print(B.employeeOf)
print(B.salary)
print(B.employeeID)