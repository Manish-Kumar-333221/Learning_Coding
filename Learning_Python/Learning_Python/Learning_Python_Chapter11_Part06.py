class Sample:
	name = "Python"
	
	@classmethod
	def setName(cls, name):
		cls.name = name

	def changeName(self, name):
		self.__class__.name = name

sa = Sample()
print(sa.name)

print()

sa.setName("New Python")
print(sa.name)

print(Sample.name)

print()

sa.changeName("Old Python")
print(sa.name)

print(Sample.name)