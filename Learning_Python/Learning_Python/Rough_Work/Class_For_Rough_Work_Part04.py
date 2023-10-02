from tkinter import Tk, Label, StringVar, Entry, Button, PhotoImage, messagebox, GROOVE, CENTER, Text, DISABLED, END, NORMAL

root=Tk()
root.geometry('450x350')
root.title('Dictionary Application')

lstword=['Parrot','Patriot','Apple','Banana','Computer','RAM']
lstmeaning=['Tota','Deshbhakt','A Fruit','A Fruit','A Device','Random Access Memory']

def search():
	w=word.get()
	try:
		i=lstword.index(w)
		textarea.config(state = NORMAL)
		textarea.delete(1.0, END)
		textarea.insert(END,lstmeaning[i])
		textarea.config(state=DISABLED)
	except:
		messagebox.showerror('Error', 'Word does not exist')
		entword.delete(0, END)
		textarea.config(state = NORMAL)
		textarea.delete(1.0, END)
		textarea.config(state=DISABLED)

def clear():
 textarea.config(state=NORMAL)
 entword.delete(0,END)
 textarea.delete(1.0,END)

def iexit():
 res=messagebox.askyesno('Confirm','Do you want to exit?')
 if res==True:
  root.destroy()

bgimage=PhotoImage(file='images/bg.png', height = 350, width = 450)
lblbg=Label(root,image=bgimage)
lblbg.place(x=0,y=0)

lblword=Label(root,text='Enter Word',font=('castellar', 5, 'bold'),fg='red3',bg='whitesmoke')
lblword.place(x=0,y=20)

word=StringVar()
entword=Entry(root,font=('Arial',5,'bold'),bd=8,relief=GROOVE,justify=CENTER,textvariable=word)
entword.place(x=100,y=20)

btnsearch=Button(root,text='Search',font=('Arial',5,'bold'),bd=5,relief=GROOVE,command=search)
btnsearch.place(x=80,y=150)

lblmeaning=Label(root,text='Meaning',font=('castellar',5,'bold'),fg='red3',bg='whitesmoke')
lblmeaning.place(x=0,y=80)

textarea=Text(root,font=('Arial',5,'bold'),height=1,width=30,bd=5,relief=GROOVE,state=DISABLED)
textarea.place(x=100,y=80)

clearimage=PhotoImage(file='images//clear.png')
btnclear=Button(root,image=clearimage,bd=0,bg='whitesmoke',command=clear)
btnclear.place(x=250,y=250)

exitimage=PhotoImage(file='images//exit.png')
btnexit=Button(root,image=exitimage, bd=0,bg='whitesmoke',command=iexit)
btnexit.place(x=350,y=250)

root.mainloop()