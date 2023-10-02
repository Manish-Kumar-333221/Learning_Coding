def typesOfExceptions():
	try:
		a = int(input("Enter 1st number: "))
		b = int(input("Enter 2nd number: "))
		print(f"{a} / {b} = {a / b}")
		print(a + b + " ")

	except ValueError:
		print(f"You entred a invalid input.\nPlease enter a valid input.")

	except TypeError as t:
		print("Type error occurred.", t)

	except ZeroDivisionError as zde:
		print("Cannot divide by Zero.", zde)

	except Exception as e:
		print("Other exception occurred.", e)

while(True):
	typesOfExceptions()

print("End of Code.")