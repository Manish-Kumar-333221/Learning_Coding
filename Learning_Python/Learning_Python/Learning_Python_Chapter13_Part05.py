from functools import reduce

lst1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

sum = lambda a, b: a + b

lst2 = reduce(sum, lst1)

print(lst2)

square = lambda a, b: a * b

lst3 = reduce(square, lst1)

print(lst3)

new_Sum = lambda a, b: (a + a) + (b + b)

lst4 = reduce(new_Sum, lst1)

print(lst4)