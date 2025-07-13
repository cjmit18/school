#CIS 235 W02
#Wayne Mitchell
#week 14 Lab 2

file = open("lab1.txt", "r") #Opens Lab 1 file
txt = file.read() #Reads that file
sep = txt.split(" ") #splits the string based on the spaces
file.close() #closes the file
print(sep)