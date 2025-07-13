#Wayne Mitchell
#cis 135-W02
#Week 4 Homework 4
# Homework to sort numbers from lowest to highest
#user enters numbers
low = float(input("Enter a number: "))
mid = float(input("Enter a number: "))
high = float(input("Enter a number: "))
# These statements check to see if the adjacent number is higher and if so switches them
if low > mid:
    low,mid = mid,low
if mid > high:
    mid,high = high,mid
if low > mid:
    low,mid = mid,low
#Prints the result
print("Low: ", low)
print("Mid: ", mid)
print("High: ", high)