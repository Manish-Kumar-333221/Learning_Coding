# Presenter Of The Day
from tkinter import *
import random

win=Tk()
win.geometry('450x350')
win.resizable(0,0)
win.title('Presenter Of The Day')

lst=['Elon_Musk.png','jg.png','Ratan_Tata.png','Bill_Gates.png','mzb.png']

def play(lblp):
	n=random.randint(0,len(lst)-1)
	path=lst[n]
	img=PhotoImage(file = "images//" + path)
	lblp.config(image=img)
	lblp.image=img # Keep a reference

lbltitle=Label(win, text='Presenter Of The Day',fg='blue',font=('Arial',10,'bold'))
lbltitle.place(x=100,y=20)

path='images//Avatar.png'
img=PhotoImage(file = path)
lblp=Label(win,image=img)
lblp.image=img # Keep a reference
lblp.place(x=150,y=100)

btnplay=Button(win,text='Play', fg='blue', font=('Arial',5),command=lambda:play(lblp))
btnplay.place(x=175,y=300)

win.mainloop()