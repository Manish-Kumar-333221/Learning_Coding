# Python program to explain os.mkdir() method
 
# importing os module
import os
 
# Directory
directory = "Old Important Files"
 
# Parent Directory path
parent_dir = "/storage/emulated/0/"
 
# Path
path = os.path.join(parent_dir, directory)
 
# Create the directory 'Old Important Files' in '/storage/emulated/0/'
os.mkdir(path)
print("Directory '%s' created" % directory)
 
# Directory
directory = "New Important Files"
 
# Parent Directory path
parent_dir = "/storage/emulated/0/"
 
# mode
mode = 0o666
 
# Path
path = os.path.join(parent_dir, directory)
 
# Create the directory 'New Important Files' in '/storage/emulated/0/' with mode 0o666
os.mkdir(path, mode)
print("Directory '%s' created" % directory)