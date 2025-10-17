public abstract class Shape {
    private String name;

    public Shape(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    // TODO: Implement this method in subclasses
    public abstract double calculateArea();

    // TODO: Implement this method in subclasses
    public abstract String getDimensions();
}

// student file