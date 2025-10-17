import java.lang.Math;
public class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        super("Circle");
        this.radius = radius;
    }

    @Override
    public double calculateArea() {
        // TODO: return the area of the circle
        return Math.PI * radius * radius;
    }

    @Override
    public String getDimensions() {
        // TODO: return a string with radius
        return "Radius: " + radius;
    }
}

// student file