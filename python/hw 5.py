#Wayne Mitchell
#cis 135-W02
#Week 5 HW 5
#Controlled loop to average a set of numbers

# variables
count = 0

answers = 0

user = float(input("Enter a number: "))

#while loop for entering numbers
while user != -99:
    count += 1
    answers += user
    user = float(input("Enter a number: "))

#checking whether division can happen or not
if count>0:
    average = answers / count
else:
    average = 0

    # printing average
print("Average is:", float(average))
