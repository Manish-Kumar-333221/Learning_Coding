def check_Negative(num):
	if num < 0:
		return True
	return False

lst1 = [57, -15, -78, -35, 78, -5, 6, -89]

lst2 = list(filter(check_Negative, lst1))

print(lst2)

print()

check_Positive = lambda num: num > 0

lst3 = list(filter(check_Positive, lst1))

print(lst3)

print()

lst4 = [i for i in lst1 if i < 0]

print(lst4)