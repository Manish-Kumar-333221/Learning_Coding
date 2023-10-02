class GrandParent:
	name = "Python"
	
	def greet(self):
		print("Hello GrandParent" )

class Parent(GrandParent):
	name = "Java"
	
	def greet(self):
		print("Hello Parent")

class child(Parent):
	chName = "C++"
	
	def hello(self):
		print(f"chName = {self.chName},\nname = {self.name}\n")

ch = child()
ch.hello()
ch.greet()
print(ch.name)