class Product {
    private:
        double price;
        double totalSales;
        int quantitySold;
    public:
        // Constructor 
        Product(double p) {
            price = p;
            totalSales = 0.0;
            quantitySold = 0;
        }

        // Getter for price
        double getPrice() const {
            return price;
        }

        // Setter for price
        void setPrice(double p) {
            price = p;
        }
        double getTotalSales() const {
            return totalSales;
        }        

        void updateTotalSales(int quantity) {
            quantitySold += quantity;
            totalSales = quantitySold * getPrice();
        }
};