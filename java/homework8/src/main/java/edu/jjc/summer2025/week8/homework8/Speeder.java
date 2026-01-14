package edu.jjc.summer2025.week8.homework8;
// Wayne Mitchell
// Program 8 - Speeder class (Starter)
// A subclass of Spaceship that represents a speeder

public class Speeder extends Spaceship {
    public Speeder(int id) {
        super(id);
    }

    @Override
    public String toString() {
        return String.format("Speeder -> %s", super.toString());
    }
}
