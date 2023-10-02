a = ()
print(a)

print()

b = (37,)
print(b)

print()

c = (67, 35, 96, 56, 89, 67, 467, 28, 58, 67)
print(c)

print()

for i in range(10):
    print(c[i] , end = ", ")

print(end = "\n\n")

print(c.count(67))
print(c.index(467))
print(sum(c))