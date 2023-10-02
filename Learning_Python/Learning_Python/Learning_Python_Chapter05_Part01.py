print("Printing first 10 natural number (using while loop):")
a1 = 1
a2 = 10
while a1 <= a2:
    print(a1)
    a1 = a1 + 1

print("\nPrinting first 10 natural number in reverse order (using while loop):")
a3 = 10
a4 = 1
while a3 >= a4:
    print(a3)
    a3 = a3 - 1

print("\nPrinting first 10 natural number (using for loop):")
c1 = 1
c2 = 10
for c in range(c1, c2):
    print(c)

print("\nPrinting first 10 natural number reverse order (using for loop):")
c4 = 10
c5 = 1
for c3 in range(c4, c5, -1):
    print(c3)


# Printing first n natural even no.
print("\nPrinting first 10 natural even number (using for loop):")
c7 = 10
for c6 in range(0, 2 * c7, 2):
    print(c6)

# Printing first n natural odd no.
print("\nPrinting first 10 natural odd number (using for loop):")
c9 = 10
for c8 in range(1, 2 * c9, 2):
    print(c8)

print()

# Drawing a Shape
n = 5
for i in range(n):
    print(("  " * (n - i - 1)), end = "")
    print(("* " * (2 * i + 1))) 

print()

n = 10
for i in range(n):
    if i == 0 or i == n-1:
        print("* " * n)
    else:
        print("* " + "  " * (n-2) + "*")