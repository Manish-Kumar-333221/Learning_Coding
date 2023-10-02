try:
	i = int(input("Enter a number: "))
	c = 1 / i
except Exception as e:
	print(e)
	exit()
finally:
	print("We were successful.")

print("Thanks for using programme.")