class Number:
	def sum(self):
		return self.a + self.b

n = Number()
n.a = 93
n.b = 59
print(n.sum())

class Form:
	formType ="Addmissiom Form"
	def printData(self):
		print(f"Student Name is: {self.Name}")
		print(f"Phone Number is: {self.Ph}")
		print(f"Student Class is: {self.Class}")

Student_01 = Form()
Student_01.Name = "Python"
Student_01.Ph = 1111111111
Student_01.Class = 10
Student_01.printData()

Student_02 = Form()
Student_02.Name = "Java"
Student_02.Ph = 2222222222
Student_02.Class = 8
Student_02.printData()