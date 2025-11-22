## Week 5

This week I practiced working with C++ classes, file input/output, constructors, and destructors.

**module6.cpp**
- Defines a class `Item` with two members: `name` (string) and `quantity` (int).
- Has a method `saveToFile()` that writes the item data to a file named `items.txt` in the format `name,quantity`.
- Has a method `loadFromFile()` that reads the contents of `items.txt` and prints each line to the screen.
- In `main()`, an `Item` object is created, given a name and quantity, then saved to the file and loaded back.

**module11.cpp**
- Defines a class `Product` with private members: `id`, `name`, and `price`.
- The constructor sets the values and prints a message when a `Product` object is created.
- The destructor prints a message when the object is destroyed.
- The `printDetails()` method prints the product information.
- In `main()`, one `Product` object is created with example values and `printDetails()` is called.
