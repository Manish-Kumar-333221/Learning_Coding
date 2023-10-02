while(True):
	try:
		a = input("Enter a number: ")
		a = int(a)
		print(f"You entred a valid input: {a}")
		break

	except Exception as e:
		print(f"You entred a invalid input: {a}")