#Wayne Mitchell
#cis 135-W02
#Week 9 Homework 6
#Program to take a number of temperature int inputs and average them as well as categorize them
###########################################################
##### DO NOT ALTER OR DELETE ANY OF THE EXISTING CODE #####
###########################################################

######## Function definitions ########

# Function 1 definition: get integer value from user
# and return the value to the main function.
def get_temp() -> float:
    user_entry: int = input("\nEnter temperature (\u00b0F) ")     # temperature entered by user
    if user_entry.isalpha(): # Changed from checking for a digit to checking for a letter this allows for negative numbers and decimal numbers to be entered
        return 0
    else:
        return float(user_entry)
# Function 2 definition: accepts the sum and count of all temperatures
# and returns the average temperature.
def calculate_average(sum:int, count:int) -> float:
    if count > 0:
        average  = sum/count
        return average

#####################################
###### Begin mainline function ######
#####################################

# Declare/initialize variables using type hinting
temperature: int            # temperature to be added to a list of temps
temp_list: list = []        # initialize an empty list to store all temps
temp_index: int = 0         # loop control variable
temp_count: int             # number of temperatures to be entered
temp_sum: int = 0           # sum of all temperatures (currently is 0)
temp_average: float         # stores the calculated average temperature

normal: int = 0             # number of normal
caution: int = 0            # number of caution
extreme_caution: int = 0    # number of extreme caution
danger: int = 0             # number of danger
extreme_danger: int = 0     # number of extreme danger

# Prompt the user for the number of temperatures to be entered.
temp_count: int = int(input("How many temperatures? "))

# Counter-controlled loop (how many times will it run?)
while temp_index < temp_count:
    # Call get_temp() function and store return value in temperature variable
    temperature: int = get_temp()
    temp_list.append(temperature)
    temp_sum += temperature
    temp_index += 1

    # Append the new temperature to the list of temperatures


    # Update the sum of temperatures


    # Increment loop control variable
if temp_count > 0:
    # Call Function 2 and store return value in temp_average
    temp_average: float = calculate_average(temp_sum, temp_count)
    celsius: float = (temp_average - 32) * 5 / 9
    celsius_display = str("{:.1f}".format(celsius))
    average = str("{:.1f}".format(temp_average))
    print("\nThe average temperature is:", average + "\u00b0F", "(" + celsius_display + "\u00b0C)")
    # Print the average of temperatures.
else:
    # Print a different message (see Sample Runs)
    print("The average temperature is: None")

# Counter-controlled loop to loop through the list of temperatures
temp_index: int = 0          # set temp_index back to 0
while temp_index < temp_count:
    if temp_list[temp_index] > 129:
        extreme_danger += 1
    elif temp_list[temp_index] >= 106 and temp_list[temp_index] <= 129:
        danger += 1
    elif temp_list[temp_index] >= 90 and temp_list[temp_index] <= 105:
        extreme_caution += 1
    elif temp_list[temp_index] >= 80 and temp_list[temp_index] <= 89:
        caution += 1
    elif temp_list[temp_index] < 80:
        normal += 1
    temp_index += 1
print("\nNumber of Normal:", normal)
print("Number of Caution:", caution)
print("Number of Extreme Caution:", extreme_caution)
print("Number of Danger:", danger)
print("Number of Extreme Danger:", extreme_danger)

if len(temp_list) > 0:
    highest: int = temp_list[0]
    lowest: int = temp_list[0]
    index = 1
    while index < len(temp_list):
        if temp_list[index] > highest:
            highest = temp_list[index]
        if temp_list[index] < lowest:
            lowest = temp_list[index]
        index += 1
else:
    highest = 0
    lowest = 0
# Print the highest and lowest temperature from the list of temperatures
print("\nHigh Temp:", highest, "\u00b0F")
print("Low Temp:" , lowest ,  "\u00b0F")

