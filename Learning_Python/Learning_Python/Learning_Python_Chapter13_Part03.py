def square(a):
	return a * a

lst1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

lst2 = list(map(square, lst1))

print(lst2)

sum = lambda a: a + a

lst3 = list(map(sum, lst1))

print(lst3)

print()

lst4 = [i * i for i in lst1]

print(lst4)

lst5 = [i + i for i in lst1]

print(lst5)