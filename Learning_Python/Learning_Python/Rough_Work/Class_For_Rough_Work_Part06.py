from tkinter import Tk, Label, Button, StringVar, Entry

root = Tk()
root.geometry('450x300')
root.title('Temperature Convertor'),

# Functions
def ctof():
	try:
		c = float(t.get())
		f = (9 * c) / 5 + 32
		lblres.config(text = f'Result:- {c} C° = {f:.1f} F°')
	except ValueError as ve:
		lblres.config(text = "Result:-  _______")

def ftoc():
	try:
		f = float(t.get())
		c = (f - 32) * 5 / 9
		lblres.config(text = f"Result:- {f} F° = {c:.1f} C°")
	except ValueError as ve:
		lblres.config(text = "Result:-  _______")

# Label
lbl1 = Label(root,text = 'Temperature Convertor',fg = 'blue',font = ('Arial', 10, 'bold'))
lbl1.place(x = 70, y = 20)

lbl2 = Label(root, text = 'Enter Temperature:-', fg = 'blue', font = ('Arial', 7)) 
lbl2.place(x = 0, y = 70)

lblres = Label(root, text = 'Result:-  _______', fg = 'blue', font = ('Arial', 10)) 
lblres.place(x = 100, y = 125)

# Entry
t = StringVar()
ent = Entry(root, bg = 'white', fg = 'black', font = ('Arial', 5), textvariable = t,  bd = 5)
ent.place(x = 200, y = 70)

# Button
btn1 = Button(root, text = 'C° To F°', fg = 'blue',  font = ('Arial', 10), command = ctof) 
btn1.place(x = 50, y = 200) 

btn2 = Button(root, text = 'F° To C°', fg = 'blue', font = ('Arial', 10), command = ftoc) 
btn2.place(x = 250, y = 200)

root.mainloop()