# f = open('Learning_Python_Chapter13_Part06.py', 'a')
# f.close()

# f = open('/storage/emulated/0/Learning_Coding/Learning_Python/Learning_PYTHON/Learning_Python_Chapter09_Part03.py', 'w')
# f.close()

# f = open('Rough_Work/Class_For_Rough_Work_Part03.py', 'w')
# f.close()

# import os
# os.remove("Learning_Python_Chapter_Part0.py")

li_1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
li_2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
li_3 = []
for i in range(11):
    li_3.append(li_1[i] * li_2[i])
    print(li_3[i])