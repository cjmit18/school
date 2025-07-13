#Wayne Mitchell
#CIS 135 W02
#Week 12 Homework 8

#Character Creation
#importing the players module
import players


count: int = 0
characters: list = []
name: str
level: int
#Variables for player creation

#Creating 3 players
while count < 3:
    question = input("Press D to use default values, or Press N to use new values: ").lower()
    #Input for player creation
    #If user presses D, default values are used
    if question == "d":
        character = players.CreatePlayer()
        characters.append(character)
        count += 1
    #If user presses N, new values are used
    #User is prompted to enter the class name and level
    elif question == "n":
        character = players.CreatePlayer()
        character.set_class_name(input("Enter class name: "))
        character.set_level(int(input("Enter level: ")))
        characters.append(character)
        count += 1
    
    #list the players created so far
while count == 3:
    print("Players:")
    count += 1
    while count >= 4 and count < 7:
        name = characters[count-4].get_class_name()
        level = characters[count-4].get_level()
        print("%s: %d" % (name, level))
        count += 1