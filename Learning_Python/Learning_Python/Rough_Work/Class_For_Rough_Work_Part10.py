class a:
	def b(self):
		print("B is running.")
	def c(self):
		print("B is running.")

class b:
	def b(self):
		print("B is running.")
	def c(self):
		print("B is running.")

class c(a, b):
	def b(self):
		print("B is running.")
	def c(self):
		print("B is running.")

print(issubclass(a, b))
print(issubclass(b, a))
print(issubclass(c, a))
print(issubclass(c, b))