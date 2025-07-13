#Wayne Mitchell
#CIS 135 W02
#Week 12 Homework 8
#Contains creating player class and its methods
class CreatePlayer:
    class_name: str
    level: int
    # Constructor to initialize the class name and level
    def __init__(self):
        self.class_name = "Warrior"
        self.level = 1
        # Default values for class name and level
    def set_class_name(self, class_name):
        self.class_name = class_name
    # Method to set the class name
    def get_class_name(self):
    # Method to get the class name
        return self.class_name
    def set_level(self, level):
        self.level = level
    # Method to set the level
    def get_level(self):
        return self.level
    # Method to get the level

