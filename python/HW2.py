#Wayne Mitchell
#cis 135-W02
#Week 2 Homework 2
#Initializing variables
room_length = input("Enter the room length(Round to the nearest foot): ")
room_width = input("Enter the room width(Round to the nearest foot): ")
price = input("Enter the price per square foot(In dollars):" )
#Calculating area and cost
area = int(room_width) * int(room_length)
cost = float(area) * float(price)
#Printing resulting calculations
print("Area of room:" , area)
print("cost of flooring:" , cost)