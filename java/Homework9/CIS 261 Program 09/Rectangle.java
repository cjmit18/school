public class Rectangle extends Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        super("Rectangle");
        this.length = length;
        this.width = width;
    }

    @Override
    public double calculateArea() {
        // TODO: return the area of the rectangle
        return length * width;
    }

    @Override
    public String getDimensions() {
        // TODO: return a string with length and width
        return "Length: " + length + ", Width: " + width;
    }
}
// student file