readFile = open("First.txt", 'r')
data = readFile.read()
print(data)
readFile.close()

print()

f = open("First.txt")
data = f.read(6)
print(data)

data = f.read(7)
print(data)

data = f.read(8)
print(data)

data = f.read(7)
print(data)
f.close()

print()

file = open("First.txt")
data = file.readline()
print(data)

data = file.readline(5)
print(data)

data = file.readline()
print(data)