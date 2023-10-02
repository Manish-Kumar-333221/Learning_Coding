class Employee:
	company = "Python"
	salary = 10000
	bonus = 2000
	# totalSalary = salary + bonus

	@property
	def totalSalary(self):
		return self.salary + self.bonus
	
	@totalSalary.setter
	def totalSalary(self, val):
		self.bonus = val - self.salary

e = Employee()
print(e.totalSalary)
e.bonus = 1000
print(e.totalSalary)

print()

e.totalSalary = 15000
print(e.totalSalary)
print(e.salary)
print(e.bonus)