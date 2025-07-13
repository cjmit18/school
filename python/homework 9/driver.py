# Wayne Mitchell
#CIS 135 W02
# Homework 9 Week 13
import electronics, computer, phone, laptop #importing all needed classes 
#enter in the info
electronic = electronics.Electronic(input("Enter an electronics brand name: ")) #enter an electronics part brand
computers = computer.Computer(input("Enter a computer brand name: "), input("Enter a computer OS: ")) #enter a brand and a os for a computer
phones = phone.Phone(input("Enter a phone brand name: "), input("Enter a phone OS name: "), input("Enter a phone number: "))#enter a phone number 
laptops = laptop.laptop(input("Enter a laptop brand name: "), input("Enter a laptop OS name: "), input("Enter the battery life of your laptop: "))#enter a phone number 

print("\nThe Electronics object:\nBrand Name:", electronic.get_brand()) # printing each saved variable 
print("\nThe Computer object:\nBrand Name:", computers.get_brand(), "\nOperating System:", computers.get_os())
print("\nThe Phone object:\nBrand Name:", phones.get_brand(),"\nOS:", phones.get_os(),"\nPhone number:", phones.get_number())
print("\nThe Laptop object:\nBrand Name:", laptops.get_brand(),"\nOS:", laptops.get_os(),"\nBattery Life:",laptops.get_battery() + "%")