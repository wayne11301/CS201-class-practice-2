
#include <string>
#include <iostream>

// Represents a product for sale

using namespace std;

class Item {
protected:
    string id, desc;
    int price;
public:
    Item(string _id, string _desc, int _price);
    Item(const Item& other);
    Item();
    // getters
    int getPrice() { return price; }
    string getID() { return id; }
    string getname() { return desc; }
    bool operator==(const Item& other);
    friend ostream& operator<<(ostream&, Item&);
};
