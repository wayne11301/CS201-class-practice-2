
#include <string>
#include <iostream>
#include "item.h"

// Inherit from item and add number to the field

using namespace std;

class CountedItem : public Item {
protected:
    int number;
public:
    CountedItem(string _id, string _desc, int _price, int _number);
    CountedItem(const CountedItem& other);
    CountedItem();
    void add1() { number++; };
    // getters
    int getPrice() { return price*number; }
    friend ostream& operator<<(ostream&, CountedItem&);
};


