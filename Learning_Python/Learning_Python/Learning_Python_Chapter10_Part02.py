class Employee:
	employeeOf = "Python"
	salary = 10000
	employeeID = int

A = Employee()
B = Employee()

A.salary = 80000
A.employeeID = 1

print(A.employeeOf)
print(A.salary)
print(A.employeeID)

print()

B.salary = 100000
B.employeeID = 2

print(B.employeeOf)
print(B.salary)
print(B.employeeID)

print()

Employee.employeeOf = "Java"

print(A.employeeOf)
print(A.salary)
print(A.employeeID)

print()

print(B.employeeOf)
print(B.salary)
print(B.employeeID)

print()