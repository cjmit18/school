#CIS 135 W02
#Wayne Mitchell
#Week 14 Homeowork 10
# This program collects IT equipment data from the user, stores it in a file, and then displays the data in a formatted table.
def collect_inventory_data():
    file = open("filename.txt", 'w')
    while True:
            name = input("Name of the equipment: ")
            if name.lower() == "exit":
                break
            number_on_hand = input("Number on hand: ")
            cost = input("Cost of one piece of this equipment: ")
            file.write(name,",",number_on_hand,",",cost)

def display_inventory_data():
    total_value = 0.0
    print("\nIT Inventory")
    print(f"{'Name':<20}{'Number on Hand':>20}{'Cost':>15}")
    
    file = open("filename.txt", 'r')
    for line in file:
            name, number, cost = line.strip().split(',')
            number = int(number)
            cost = float(cost)
            value = number * cost
            total_value += value
            print(f"{name:<20}{number:>20,}{cost:>15.2f}")
    
    print(f"\nTotal value of inventory: {total_value:,.2f}")

def main():
    collect_inventory_data()
    display_inventory_data()

if __name__ == "__main__":
    main()
