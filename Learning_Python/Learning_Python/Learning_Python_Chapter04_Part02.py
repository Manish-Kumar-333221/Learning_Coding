# if-elif-else Statement
age = int(input("Enter your age: "))
if (age >= 60):
    print("You are well experienced!")
elif (age >= 45):
    print("You are experienced!")
elif (age >= 30):
      print("You are semi experienced!")
elif (age >= 18):
      print("You are semi-semi experienced!")
else:
      print("You are not experienced!")

print("-----------------------")

# Short-Hand if-else statement
print(True) if 5 > 3 else print(False)

print(True) if 5 < 3 else print(False)

t = True if True == True else False
print(t)
t = True if True == False else False
print(t, "\n-----------------------")

age = int(input("Enter Your age: "))

# short-Hand if else condition
aa1 = "You are eligible to vote!" if age >= 18 else "You are not eligible to vote yet!"
print(aa1)

print("-----------------------")

# short-Hand if else-if condition
aa2 = "You are eligible to vote!" if age >= 18 else  "You should study now don't think about it" if age <= 16 else ""

print(aa2)

print("-----------------------")

# variable = expressionTrue if (condition) else expressionTrue if (condition) expressionFalse)

# short-Hand if else-if else condition
b = "You are eligible to vote!" if (age >= 18) else "You are not eligible to vote yet!" if (age >= 15) else "You are a kid now, you go to your school!"
print(b)

print("-----------------------")
'''
variable = expressionTrue if (condition) else expressionTrue : if (condition) else expressionTrue if (condition)  else expressionTrue if (condition) expressionFalse
'''
# short-Hand if else-if else-if else-if else condition
c = "You are well experienced!" if age >= 60 else  "You are experienced!"if age >= 45 else "You are semi experienced!" if age >= 30 else "You are semi-semi experienced!" if age >= 18 else "You are not experienced!"
print(c)
print("-----------------------")