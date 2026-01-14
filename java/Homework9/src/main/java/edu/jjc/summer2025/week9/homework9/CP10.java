package edu.jjc.summer2025.week9.homework9;
public class CP10 {
    public static void main(String[] args) {
        // TODO: Create an array of Shape objects
        Shape[] shapes = new Shape[5];
        shapes[0] = new Circle(3.0);
        shapes[1] = new Rectangle(4.0, 5.0);
        shapes[2] = new Triangle(6.0, 7.0);
        shapes[3] = new Circle(5.5);
        shapes[4] = new Rectangle(3.5, 2.0);
        // Populate it with at least one Circle, Rectangle, and Triangle
        // Loop through the array and display each shape's name, dimensions, and area
        for(Shape shape : shapes) {
            System.out.println("Shape: " + shape.getName());
            System.out.println("Dimensions: \n" + shape.getDimensions());
            System.out.printf("Area: %.2f\n", shape.calculateArea());
        }
        // Example (replace with actual implementation):
        // Shape[] shapes = new Shape[3];
        // shapes[0] = new Circle(5.5);
        // ...
    }
}

// student file