from tkinter import Tk, Label
# from tkinter.ttk import Label
from time import strftime

def clock():
	tick = strftime('%l:%M:%S ')
	# tick = strftime('%A %w %s %h %l %y')
	# tick = strftime('%a %d:%m:%Y\n%H:%M:%S %p\n%X\n%h %D\n%x\n%Z %z\n%c\n%C\n%v\n%V\n%b\n%B\n%m\n%M\n%F\n%g\n%G\n%j\n%k\n%w\n%W\n%e\n%r\n%R\n%T\n%u\n%U\n%I\n%p\n%P')
	clock_label.config(text = tick)
	clock_label.after(1, clock)

root = Tk()
root.title('Digital Clock in Python')

clock_label = Label(root, font = ('sans', 5), background = 'blue', foreground = 'black')

clock_label.pack(anchor = 'center')

clock()

root.mainloop()