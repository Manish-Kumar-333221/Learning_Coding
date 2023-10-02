from tkinter import Tk, Label, StringVar, Entry, Button

win = Tk()
win.geometry("450x300")
win.title('Simple Calculator')

# Functions
def add():
	try:
		x = float(n1.get())
		y = float(n2.get())
		res = x + y
		lblres.config(text = f"Result:- {x} + {y} = {res}")
	except ValueError as ve:
		lblres.config(text = "Result:-  _______")

def sub():
	try:
		x = float(n1.get())
		y = float(n2.get())
		res = x - y
		lblres.config(text = f"Result:- {x} - {y} = {res}")
	except ValueError as ve:
		lblres.config(text = "Result:-  _______")

def mul():
	try:
		x = float(n1.get())
		y = float(n2.get())
		res = x * y
		lblres.config(text = f"Result:- {x} * {y} = {res}")
	except ValueError as ve:
		lblres.config(text = "Result:-  _______")

def div():
	try:
		x = float(n1.get())
		y = float(n2.get())
		res = x / y
		lblres.config(text = f"Result:- {x} / {y} = {res}")
	except ValueError as ve:
		lblres.config(text = "'Result:-  _______")

	except ZeroDivisionError as zde:
		lblres.config(text = "Result:-  _______")

# Label
lbln1 = Label(win, text = 'Enter First No:-', fg = 'blue', font = ('Arial', 6))
lbln1.place(x = 0, y = 55)

lbln2 = Label(win, text = 'Enter Second No:-', fg = 'blue', font = ('Arial', 6)) 
lbln2.place(x = 0, y = 105)

lblres = Label(win, text = 'Result:-  _______', fg = 'blue', font = ('Arial', 8)) 
lblres.place(x = 100, y = 150)

# Entry 
n1 = StringVar() 
entn1 = Entry(win, bg = 'red', fg = 'white', font = ('Arial', 5), textvariable = n1, bd = 5) 
entn1.place(x = 160, y = 50)

n2 = StringVar()
entn2 = Entry(win, bg = 'red', fg = 'white', font = ('Arial', 5), textvariable = n2, bd = 5)
entn2.place(x = 160, y = 100)

# Button 
btnadd = Button(win, text = 'Add', fg = 'blue', font = ('Arial', 5), command = add)
btnadd.place(x = 10, y = 200)

btnsub = Button(win, text = 'Sub', fg = 'blue', font = ('Arial', 5), command = sub)
btnsub.place(x = 110, y = 200)

btnmult = Button(win, text = 'Mul', fg = 'blue', font = ('Arial', 5), command = mul)
btnmult.place(x = 210, y = 200)

btndiv = Button(win, text = 'Div', fg = 'blue', font = ('Arial', 5), command = div) 
btndiv.place(x = 310, y = 200)

win.mainloop() 