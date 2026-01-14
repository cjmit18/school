package edu.jjc.summer2025.week8.homework8;
// Wayne Mitchell
// Program 8 - XWing class (Starter)
// A subclass of Spaceship that represents an X-Wing

public class XWing extends Spaceship {
    public XWing(int id) {
        super(id);
    }

    @Override
    public String toString() {
        return String.format("XWing -> %s", super.toString());
    }
}
