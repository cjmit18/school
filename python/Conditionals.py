#Wayne Mitchell
#cis 135-W02
#Week 4 Lab 1
#For this assignment we will be using if/else conditionals to see if the correct input was entered
#This will get the user input
user_input = input("Enter 'y' for yes: ")
#If the input is "y" then the initial if statement will trigger the print statement below it
if user_input == 'y':
    print("Your reply is yes.")
    #if the user input is not "y" then the else statement will trigger the second print statment
else:
    print("Your reply is invalid.")