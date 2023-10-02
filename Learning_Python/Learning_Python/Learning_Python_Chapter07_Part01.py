a = {5 : 5,
        "Name" : "Python",
        "List" : [56, 89, 68],
        "Tuple" : (78, 98, 69),
        "Set" : {68, 456, 369, 78, 68}}

print(a , "\n")

print(a.items() , "\n")

a.update({"No." : 1})

print(a , "\n")

a.update({"friends" : "Python",
                     1 : 1})

print(a , "\n")

a.update({"Dict" : {"Hello" : "Python"}})

print(a , "\n")

b = {"Java" : "Good",
        "C++" : "Good",
        "C" : "Good",
        "Python" : "Good"}

a.update(b)

print(a , "\n")

print(a.keys() , "\n")

print(a.values(), "\n")

print(a , "\n")

print(a["Name"])
print(a.get("Name") , "\n")


print(a["List"])
print(a["List"][0])
print(a.get("List"))
print(a.get("List")[0] , "\n")

print(a["Tuple"])
print(a["Tuple"][0])
print(a.get("Tuple"))
print(a.get("Tuple")[0] , "\n")

print(a["Dict"])
print(a["Dict"]["Hello"])
print(a.get("Dict"))
print(a.get("Dict")["Hello"] , "\n")

print(a["Set"])
print(a.get("Set") , "\n")

print(a["Python"])
print(a.get("Python") , "\n")

# The difference between .get and [] sytax in Dictionaries?
print(a.get("JavaScript")) # Returns None as "JavaScript"  is not present in the dictionary
# print(a["JavaScript"]) # throws an error as "JavaScript"  is not present in the dictionary

print()

del a["C"]

print(a)