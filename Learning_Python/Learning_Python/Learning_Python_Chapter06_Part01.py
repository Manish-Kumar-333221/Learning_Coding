a = [57, 97, 37, 90, 00]
print(a)

print(a[0])
print(a[1])
print(a[2])
print(a[3])
print(a[4])

print()

print(a[-1])
print(a[-2])
print(a[-3])
print(a[-4])
print(a[-5])

print()

print(a[0 : 2])
print(a[ : 3])
print(a[1 : 4])
print(a[1 : ])

print()

print(a[-5 : -3])
print(a[-5 : ])
print(a[ : -1])

print()

print(a[ : ])

print()

b = 3
c = [69, 62, 56, 17, "Hello",  'Python', b, True, 567.877]
for item in c:
    print(item)

print()

c[0] = 11
print(c)

c[1] = "Hello"
print(c)

c[-1] = 567
print(c)

print()

a.sort()
print(a)

a.reverse()
print(a)

a.append(37)
print(a)

a.insert(3, 777)
print(a)

a.pop(3)
print(a)

a.remove(37)
print(a)

print()