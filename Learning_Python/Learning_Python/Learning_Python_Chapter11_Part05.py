class Parent:
	def __init__(self):
		print("Constructor is running in Parent Class.")

	def greet(self):
		print("Hello Parent")

	def hello(self):
		print("Good Morning, Parent.")

class Child(Parent):
	def __init__(self):
		super().__init__()
		print("Constructor is running in Child Class.")
	

	def hello(self):
		super().greet()
		print("Hello Child")
		super().hello()

ch = Child()
ch.hello()