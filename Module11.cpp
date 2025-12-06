#include <iostream>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;

public:
    // Constructor
    Product(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called\n";
    }

    // Destructor
    ~Product() {
        cout << "Destructor called\n";
    }

    // Method to print details
    void printDetails() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Price: $" << price << endl;
    }
};

int main() {
    Product item(10, "Water Bottle", 12.99);
    item.printDetails();

    return 0;
}
