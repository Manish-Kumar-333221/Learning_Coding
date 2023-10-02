a = set()
print(type(a))

a.add(88)
a.add(67)
a.add(26)
a.add((56, 86, 26))
print(a, "\n")

b = {39, 59, 61, 10}
b.add(68)
b.add(68)
b.add(26)
print(b)

print(len(b))

b.remove(39)
# b.remove(15) # throws an error while trying to remove 15 (which is not present in the set)
print(b)

print(b.pop())

print()

print(a.union(b), "\n")

print(a.intersection(b))