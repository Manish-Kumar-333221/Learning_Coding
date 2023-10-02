from os import listdir, path

def change(cur_path):
	list_Dir = listdir(cur_path)
	for item in list_Dir:
		if path.isdir(cur_path + item):
				change(cur_path + item + "/")
		elif ".htm" in item:
			print(cur_path.replace("/storage/emulated/0/Download/bootstrap-5.2.0-examples", "") + "->" + item)

if __name__ == "__main__":
	cur_path = "/storage/emulated/0/Download/bootstrap-5.2.0-examples/"
	# cur_path = "/storage/emulated/0/"

	if path.exists(cur_path):
		change(cur_path)