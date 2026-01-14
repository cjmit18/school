package edu.jjc.summer2025.week4.homework4;

// Name: Wayne Mitchell
// Program: Homework 4
// Description: Sales tracking program for five products.


public class Product {

    private double price;
    private double totalSales;

    // 1-argument constructor
    public Product(double price) {
        this.price = price;
        this.totalSales = 0.0;
    }

    // Getter for price
    public double getPrice() {
        return price;
    }

    // Setter for price
    public void setPrice(double price) {
        this.price = price;
    }

    // Getter for total sales
    public double getTotalSales() {
        return totalSales;
    }

    // Setter for total sales
    public void setTotalSales(double totalSales) {
        this.totalSales = totalSales;
    }

    // Method to update total sales
    public void updateTotalSales(int quantitySold) {
        totalSales += quantitySold * price;
    }
}
