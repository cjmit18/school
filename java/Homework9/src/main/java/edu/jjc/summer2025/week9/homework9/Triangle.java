package edu.jjc.summer2025.week9.homework9;
public class Triangle extends Shape {
private double base;
    private double height;

    public Triangle(double base, double height) {
        super("Triangle");
        this.base = base;
        this.height = height;
    }

    @Override
    public double calculateArea() {
        // TODO: return the area of the triangle
        return 0.5 * base * height;
    }

    @Override
    public String getDimensions() {
        // TODO: return a string with base and height
        return "Base: " + base + ", Height: " + height;
    }
}

// student file