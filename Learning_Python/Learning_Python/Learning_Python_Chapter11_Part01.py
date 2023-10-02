class Parent:
	paName = "Parent"
	
	def getPaName(self):
		print("paName is", self.paName)
	
	@staticmethod
	def greet(Name):
		print("Hello", Name)

class Child(Parent):
	chName = "Child"

	def getChName(self):
		print(f"chName = {self.chName}")

	@staticmethod
	def hello(Name):
		print("Hello", Name)

ch = Child()
ch.getPaName()
ch.greet("Child")
ch.getChName()
ch.hello("Child")

print()

print(ch.paName)
print(ch.chName)

print()

ch.paName = "New Parent"
ch.chName = "New Child"

print(ch.paName)
print(ch.chName)