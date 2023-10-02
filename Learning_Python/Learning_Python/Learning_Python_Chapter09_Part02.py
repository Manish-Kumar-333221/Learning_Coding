file = open("Second.txt", 'w')
file.write("Hello Python\nThis is Second File.")
file.close()

writeFile = open("Third.txt", 'w')
writeFile.write("This is Third File. ")
writeFile.write("This is Third File. ")
writeFile.write("This is Third File. ")
writeFile.write("This is Third File. ")
writeFile.close()

f = open("Fourth.txt", 'a')
f.write("This is Forth File. ")
f.close()

with open("Fifth.txt", 'w') as f:
	f.write("This is Fifth File.")

with open("Fifth.txt",  'r') as file:
	print(file.read())