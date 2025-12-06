#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    // Write item data to items.txt in the format: name,quantity
    void saveToFile() {
        ofstream out("items.txt");

        if (out.is_open()) {
            out << name << "," << quantity << endl;
            out.close();
            cout << "Item saved to file." << endl;
        } else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    // Read and display data from items.txt
    void loadFromFile() {
        ifstream in("items.txt");

        if (in.is_open()) {
            string line;

            while (getline(in, line)) {
                cout << "File content: " << line << endl;
            }

            in.close();
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    }
};

int main() {
    Item tool;

    tool.name = "Screwdriver";
    tool.quantity = 10;

    // Save data to file
    tool.saveToFile();

    // Load and display data from file
    tool.loadFromFile();

    return 0;
}
