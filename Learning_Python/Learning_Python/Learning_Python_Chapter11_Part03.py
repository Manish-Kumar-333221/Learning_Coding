class Parent1:
	name = "Python"
	
	def greet(self):
		print("Hello Parent1")

class Parent2:
	name = "Java"
	
	def greet(self):
		print("Hello Parent2")

class Child(Parent1, Parent2):
	newName = "C++"
	
	def hello(self):
		print("Hello Child")

ch = Child()
ch.greet()
ch.hello()
print(ch.name)
print(ch.newName)