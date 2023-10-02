class Parent:
	name = "Parent"
	
	def getnlName(self):
		print("name is", self.name)
	
	def greet(self):
		print("Good Morning! Parent")

class Child(Parent):
	name = "Child"

	def getName(self):
		print(f"name = {self.name}")
	
	def greet(self):
		print("Good Morning! Child")

ch = Child()
ch.getName()
ch.greet()

print()

print(ch.name)

print()

ch.name = "New Child"

print(ch.name)