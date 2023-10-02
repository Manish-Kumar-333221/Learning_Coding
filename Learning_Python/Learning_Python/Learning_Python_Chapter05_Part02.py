# Break and continue using loops!
for i in range(50):
    print(str(i) + "  Python is great")
    if i == 2:
        print("Ending the loop")
        break

print("-------------")

i = 0
while i < 50:
    print(str(i) + " Python is great")
    if i == 5:
        print("Ending the loop")
        break
    i = i + 1

print("-------------")

for  j in range(5):
    if (j == 2):
        print("Continue the loop")
        continue
    print(str(j) + "  Python is great")

print("-------------")

i = 0
while i < 5:
    if i == 2:
        print("Continue the loop")
        i = i + 1
        continue
    print(str(i) + " Python is great")
    i = i + 1

print("-------------")