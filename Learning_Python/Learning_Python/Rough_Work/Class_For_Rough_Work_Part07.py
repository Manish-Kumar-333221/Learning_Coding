from os import path, listdir
import os

def create(dir_Path):
	lst_Dir = listdir(dir_Path)
	for item in lst_Dir:
		if path.isdir(f"{dir_Path}{item}"):
			os.mkdir(os.path.join(dir_Path.replace("413A-1907", "emulated/0"), item))
			create(f"{dir_Path}{item}/")
		else:
			with open(f"{dir_Path}{item}", "r") as f1:
				with open(os.path.join(dir_Path.replace("413A-1907", "emulated/0"), item), "w") as f2:
					if item.contains(".txt"):
						f2.write(f1.read())

dir_Path = "/storage/413A-1907/Learning_Coding/Learning_Numpy/Learning_Numpy_Documentation/"
create(dir_Path)