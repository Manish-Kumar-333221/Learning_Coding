list = ["Hello Python", "Hello Java", "Hello C++", "Hello C"]

str = "!,\n".join(list)
print(str)

print()

str1 = "Hello Python!"
str2 = "Hello Java!"
str3 = "Hello C++!"
str4 = "Hello C!"

print("{}, {}, {}, {}".format(str1, str2, str3, str4))

print("{1}, {2}, {3}, {0}".format(str1, str2, str3, str4))

print("{0}, {0}, {0}, {0}".format(str1, str2, str3, str4))