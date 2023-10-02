a = 6
b = "A"
c = 5.51
d = 'B'
print(f"The 1st no. = {a} and The 2nd no. = {b}")
print("-------------")

print(f"The 1st no. = {c:.1f} and The 2nd no. = {d}")

print("-------------")
# "H E L L O   W O R D"
#  1 2 3 4 5 6 7 8 9 10  (length)
#  0 1 2 3 4 5 6 7 8 9   (index)
#   I  I  I  I   I  I  I  I  I  I
name = "Manish"
value = len(name)
print(value, "\n-------------")

print(name.lower())
# or
l = name.lower()
print(l, "\n-------------")

print(name.upper())
# or
u = name.upper()
print(u, "\n-------------")

print(name.casefold())
# or
C = "ß".casefold()
print(C, "\n-------------")

name1 = "    Manish Kumar    "
print(name1, "\nlength =", len(name1))
print("-------------")

print(name1.strip())
# or
trim1 = name1.strip()
print(trim1, "\nlength =", len(trim1))
print("-------------")

print(name1.lstrip())
# or
trim2 = name1.lstrip()
print(trim2, "\nlength =", len(trim2))
print("-------------")

print(name1.rstrip())
# or
trim3 = name1.rstrip()
print(trim3, "\nlength =", len(trim3))
print("-------------")

print(name[2:])
# or
start = name[2:]
print(start, "\n-------------")

print(name[2 : 5])
# or
start_to_end = name[2 : 6]
print(start_to_end, "\n-------------")

print(name.replace("n", "h"))
# or
replace = name.replace("i", "a")
print(replace, "\n-------------")
hello = "manis"
print(hello.replace("nis", "hes"))
# or
replace_more = hello.replace("nish", "p")
print(replace_more, "\n-------------")

print(name.startswith("Ma"))
# or name = "10101010"
start_with = name.startswith("ma")
print(start_with, "\n-------------")

print(name.endswith("ish"))
# or
end_with = name.endswith("s")
print(end_with, "\n-------------")

print(name[3])
# or
character_at = name[4]
print(character_at, "\n-------------")

print(name.index("M"))
# or
character_index = name.index("h")
print(character_index, "\n-------------")

name2 = "Harry"
print(name2.index("ry"))
# or
double_character_index = name2.index("r")
print(double_character_index, "\n-------------")

name3 = "Harryrry"
print(name3.index("rry"))
# or
more_double_character_index = name3.index("rry", 2)
print(more_double_character_index)
more_double_character_index = name3.index("rry", 3)
print(more_double_character_index, "\n-------------")

print(name2.rindex("rry"))
# or
character_last_index = name2.rindex("rry", 2)
print(character_last_index, "\n-------------")

print(name == ("Manish"))
# or
print(name is ("Manish"))
# or
equal = name.__eq__("manish")
print(equal, "\n-------------")

print(name.lower().__eq__("maNisH".lower()))
print(name.lower() == "maNisH".lower())
# or
case_equal = name.lower() == "Manishabc".lower()
print(case_equal, "\n-------------")

newName = "abcd987"
print(newName.isalnum())
print("Running")

newName = "abc987+-"
print(newName.isalnum())

print("-------------")

str1 = "Hello World"
str2 = "Hello"
blnFound = str2 in str1
print("contains another string? : ", blnFound)
print("-------------")

print("I am escape sequence\ndouble quote\n-------------")
print("I am escape sequence\tdouble quote\n-------------")
print("I am escape sequence\\double quote\n-------------")
print("I am escape sequence \bdouble quote\n-------------")
print("I am escape sequence\rdouble quote\n-------------")
print("I am escape sequence\vdouble quote\n-------------")
print("I am escape sequence\"double quote\n-------------")
print("I am escape sequence\'double quote\n-------------")
print("I am escape sequence\a double quote\n-------------")