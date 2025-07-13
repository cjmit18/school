#Wayne Mitchell
#cis 135-W02
#Week 4 Lab 2
#Asssignment goal is to add an additional conditional statement and response
#This will get the user input
user_input = input("Enter 'y' for yes or 'n' for no: ")
#If the input is "y" then the initial if statement will trigger the print statement below it
if user_input == 'y':
    print("Your reply is yes.")
    #else if statement to include another character and reply
elif user_input == 'n':
    print("Your reply is no.")
    #if the user input is not "y" then the else statement will trigger the second print statment
else:
    print("Your reply is invalid.")
