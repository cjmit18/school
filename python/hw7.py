#Wayne Mitchell
#Homework 7
#cis 135-W02
#Patient search and tracking system

#function to add to a list
def add_patient(name_list, age_list):
    new_name = input("Enter new name: ")
    name_list.append(new_name)
    new_age = int(input("Enter new age: "))
    age_list.append(new_age)
    print("Added successfully")
    return name_list, age_list
#function to display patients
def display_patients(name_list, age_list):
    index: int = 0
    print("{:<8}{:>8}".format("Name", "Age"))
    while index < len(name_list):
        print("{:<8}{:>8}".format(name_list[index], age_list[index]))
        index += 1
#function to search for patients
def search_patient(name_list, age_list):
    found: bool = False
    index: int = 0
    search = input("enter patient name: ")
    while found is False and index < len(name_list):
        if search == name_list[index]:
            found = True
            print("Age:" , age_list[index])
        else:
            print("Not found")
            index += 1
#Menu display
def display_menu():
    print("Welcome to Patient Search System")
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
