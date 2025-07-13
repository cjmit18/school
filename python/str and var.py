#Wayne Mitchell
#cis 135-W02
#Week 3 Lab 1
#Part 1 assign variables
helloWorld = "Hello world"
countdown = .12345
# printing both variables on seperate lines
print(helloWorld)
print(countdown)
#Print helloWorld using a placeholder
print("The value of helloWorld is {0:11s}.".format(helloWorld))
#Print countdown losing a number in each iteration
print("The value of countdown is {0:7.5f}.".format(countdown))
print("The value of countdown is {0:6.4f}.".format(countdown))
print("The value of countdown is {0:5.3f}.".format(countdown))
print("The value of countdown is {0:4.2f}.".format(countdown))
print("The value of countdown is {0:3.1f}.".format(countdown))
print("The value of countdown is {0:1.0f}.".format(countdown))
# Combining both variables and placeholders and printing out
print("{0:11s}, the value of countdown is {1:4.2f}".format(helloWorld,countdown))
