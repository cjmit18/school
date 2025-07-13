#Wayne Mitchell
#cis 135-W02
#Week 13 Lab 1

# import shape
import shape
radius: int = 0
#circle class inherits from shape class
class circle(shape.shape):
    #
    def __init__(self, area: int, radius: int) -> None:
        self.set_area(radius)
        self.radius = radius
    #Constructor for the circle class

    #setter for the radius of the circle class
    def set_radius(self, radius: int) -> None:
        self.radius = radius
    #getter for the radius of the circle class
    def get_radius(self) -> int:
        return self.radius
