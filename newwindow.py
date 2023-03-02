
# Import Module
from tkinter import *
import pandas as pd
df = pd.read_csv("C:\\Users\\pavan\\Downloads\\Automobile_data.csv")
#print("First 30 from the List")
#print(df.head(30))

# create root window
root = Tk()

# root window title and dimension
root.title("Welcome")
# Set geometry (widthxheight)
root.geometry('900x500')

# adding menu bar in root window
# new item in menu bar labelled as 'New'
# adding more items in the menu bar
menu = Menu(root)
item = Menu(menu)
menu.add_cascade(label='File', menu=item)
item.add_command(label='New')
item.add_command(label='Open')
item.add_command(label='Save')
item.add_command(label='Save As')
item.add_command(label='exit')
root.config(menu=menu)

item = Menu(menu)
menu.add_cascade(label='edit', menu=item)
item.add_command(label='cut')
item.add_command(label='copy')
item.add_command(label='Paste')
item.add_command(label='Find')
item.add_command(label='exit')
root.config(menu=menu)

#adding a label to the root window
lbl = Label(root, text = "Welcome To  Aadhya Automobiles")
lbl.grid(column =1, row =1)

# adding Entry Field
#txt = Entry(root, width=50)
#txt.grid(column =5, row =5)

# function to display text when
# button is clicked
def clicked1():
    res = df.head(5)
    lbl.grid(column =4, row =9)
    lbl.configure(text = res)

# function to display text when
# button is clicked
def clicked2():
    car_Manufacturers = df.groupby('company')
    res = car_Manufacturers.get_group('toyota')
    lbl.grid(column =1, row =9)
    lbl.configure(text = res) 
# button widget with red color text
# inside
btn1 = Button(root, text = "Click here to display Cars" ,
             fg = "blue", command=clicked1)

# set Button grid
btn1.grid(column=0, row=2)
# button widget with red color text
# inside
btn2 = Button(root, text = "Click here to display Toyoto Cars" ,
             fg = "red", command=clicked2)

# set Button grid
btn2.grid(column=0, row=4)
# all widgets will be here
# Execute Tkinter
root.mainloop()

