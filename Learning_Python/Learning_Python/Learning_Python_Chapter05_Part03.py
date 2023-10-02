# pass statement doesn't do anything.
for i in range(45):
	pass

# else statement executed when loop is over.
for i in range(5):
	print(i)
else:
	print("Done")

print()

# else statement doesn't executed when loop over with break statement.
for i in range(10):
	print(i)
	if i == 5:
		break
else:
	print("Done")