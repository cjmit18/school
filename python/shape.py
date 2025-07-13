#Wayne Mitchell
#cis 135-W02
#Week 13 Lab 1

#shape class
class shape:
    area: int = 0 
    def __init__(self, area: int) -> None:
        self.set_area(area)
    #Constructor for the shape class

    #setter for the area of the shape class
    def set_area(self, area: int) -> None:
        self.area = area
    #getter for the area of the shape class
    def get_area(self) -> int:
        return self.area