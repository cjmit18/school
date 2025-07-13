#Wayne Mitchell
#cis 135-W02
#Week 13 Lab 3

# lab to demonstrate inheritance

# import the shape and circle classes
import circle
import shape

# create a shape object and two circle objects
shape_object = shape.shape(1)
circle_object1 = circle.circle(1, 1)
circle_object2 = circle.circle(2, 2)
#print the area of the shape and shape objects, the radius of the shape objects, the type of each object, and the location in memory of each object
print("The area of the shape is", shape_object.get_area()) # Fill in the blank with the appropriate object name and method call
print("The type of the shape object is", type(shape_object)) # Fill in the blank with the appropriate object name
print("The location in memory of the shape object is", shape_object) # Fill in the blank with the appropriate object name
print()
#print the area of the circle object, the radius of the circle object, the type of each object, and the location in memory of each object
print("The area of the first circle is", circle_object1.get_area()) # Fill in the blank with the appropriate object name and method call
print("The radius of the first circle is", circle_object1.get_radius) # Fill in the blank with the appropriate object name and method call
print("The type of the first circle object is", type(circle_object1)) # Fill in the blank with the appropriate object name
print("The location in memory of the first circle object is", circle_object1) # Fill in the blank with the appropriate object name
print()
# print the area of the second circle object, the radius of the second circle object, the type of each object, and the location in memory of each object
print("The area of the second circle is", circle_object2.get_area()) # Fill in the blank with the appropriate object name and method call
print("The radius of the second circle is", circle_object2.get_radius()) # Fill in the blank with the appropriate object name and method call
print("The type of the second circle object is", type(circle_object2)) # Fill in the blank with the appropriate object name
print("The location in memory of the first second object is", circle_object2) # Fill in the blank with the appropriate object name