class Number:
	def mul(self, a, b):
		print(f"{a} * {b} = {a * b}")

def sum(a, b):
	print(f"{a} + {b} = {a + b}")

def greet():
	name = input("What's your name sir?\n")
	print("Hello, " + name + "!")

if __name__ == "__main__":
	name = input("Enter you name: ")
	print("Hello, " + name + "!")
	sum(50, 50)

print("Code Outside of main block.")