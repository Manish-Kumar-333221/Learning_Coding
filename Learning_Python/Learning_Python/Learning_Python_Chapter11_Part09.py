class Number:
	def __init__(self, num):
		self.num = num

	def __str__(self):
		return f"Number: {self.num}"

	def __len__(self):
		return self.num

num = Number(10)
print(num)
print(len(num))