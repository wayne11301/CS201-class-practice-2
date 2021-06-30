#include "counteditem.h"

CountedItem::CountedItem(string _id, string _desc, int _price, int _number) :Item(_id, _desc, _price) {
    number = _number;
}

CountedItem::CountedItem(const CountedItem& other) {
    add1();
}

CountedItem::CountedItem() {
    number = 0;
}

// outputting an Item
ostream& operator<<(ostream& out, CountedItem& item) {
    out << "ID: " << item.id << " " << item.desc << " unit price: $" << ((double)item.price) / 100 << " quantity: " << item.number << endl << "Total price: $" << (double)item.getPrice() / 100;

    return out;
}