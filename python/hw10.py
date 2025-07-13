Wayne Mitchell
Homework 7
# Brief description of assignment
found: bool
index: int
search = input()
def add_patient(name_list, age_list):
    new_name = input("Enter new name: ")
    name_list.append(new_name)
    return name_list
def display_patients(name_list, age_list):
    while index < len(name_list):
        print(name_list[index])
def search_patient(name_list, age_list):
    while found is false and index < len(name_list):
        if search == name_list[index]:
            found = True
            print("Found name" , age_list[index])
        else:
            print("Not found")
            index += 1
def display_menu():
print("1. Add employee")
print("2. Check employee")
print("3. Display all employees")
print("4. Exit")
menu_choice = int(input("Your choice: "))
return menu_choice
##### Main Section of Program (Requirement 5) #####
# Declare variables and two empty lists
name_list:list = []
age_list:list = []
user_entry:int
# Call the display_menu function and save the return value
user_entry = display_menu()
# Create a sentinel-controlled loop
while user_entry != 4:
    if user_entry == 1:
        add_patient(name_list,age_list)
    elif user_entry == 2:
        search_patient(name_list,age_list)
    elif user_entry == 3:
        display_patients(name_list,age_list)
user_entry = display_menu()
