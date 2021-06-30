#include "item.h"

// Initialize item with values for id, description, price
Item::Item(string _id, string _desc, int _price)
{
    id = _id;
    desc = _desc;
    price = _price;
}

// Copy constructor
// We need this because the existence of the above constructor
// that initializes the 3 fields means the compiler
// will not automatically define the default constructor
// and copy constructor for us
Item::Item(const Item& other) {
    id = other.id;
    desc = other.desc;
    price = other.price;
}

// Similarly, need to define a default constructor
Item::Item() {
    id = "";
    desc = "";
    price = 0;
}

// Two items are the same if the id is the same
bool Item::operator==(const Item& other) {
    return this->id == other.id;
}

// outputting an Item
ostream& operator<<(ostream& out, Item& item) {
    out << "ID: "<<item.id<<" "<< item.desc << " unit price: $"<< (double)(item.price)/100<<endl;
    return out;
}