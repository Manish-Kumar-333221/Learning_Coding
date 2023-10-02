class User:
	__name = "Python"
	__i = 2
	def __foo(self):
		print("Hii")
		print(self.__name)
		self.__name = "Python" + str(self.__i)
		self.__i += 1

	def fo(self):
		print("hiiiiiiiiiii")
		print(self.__name)
		self.__foo()
		self.__name = "Python2"

user = User()
# user.__foo() # not work
# print(user.__name()) # not work

print(user._User__name) # work
user._User__foo() # work
print(user._User__name) # work

# user.fo()

import heapq

grades = {57, 78, 79, 25, 68, 96, 4, 68}
print(heapq.nlargest(3, grades))
print(heapq.nsmallest(3, grades))

num1 = 10_00_00_00_0000_0000_00
num2 = 10_10_10_10_1000_1000_10
total = num1 + num2
print(f"{total:,}")
print(f"{total:_}")