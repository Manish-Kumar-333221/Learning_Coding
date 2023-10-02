list1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

list2 = [i for i in list1 if i % 2 == 0]
print(list2)

print()

set = {item for item in list1 if item // 2 > 2}

print(set)

print()

list3 = [item for item in list1]
print(list3)

print()

list4 = [i * 9 for i in range(1, 11)]
print(list4)

print()

list5 = [str(i * 4) for i in range(1, 11)]
print(list5)