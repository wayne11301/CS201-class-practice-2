// A driver to try out the Item and CountedItem classes

#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include "counteditem.h"

using namespace std;

int main() {
    Item apple("4403", "apple", 50),
        banana("4468", "banana", 29),
        cantaloupe("4093", "cantaloupe", 299);
    vector<Item> items;

    items.push_back(apple);
    items.push_back(banana);
    items.push_back(cantaloupe);

    cout << "Working with Item's" << endl << endl;

    char more = 'y';
    string tofind;

    while ('y' == more) {
        cout << "What would you like to find? Enter the product ID: ";
        cin>>tofind;

        Item target(tofind, "", 0);
        /* TODO: use tofind to initialize */
        auto it = find(items.begin(), items.end(), target);
        if (it != items.end()) {
            cout << *it;
        }
        else{
            cerr << "error input,try again"<<endl;
            continue;
        }

            /* TODO: use find() to find Item of items vector with tofind as an ID */
        cout << "Do you want to find anything more? (y/n) ";
        cin >> more;
    }

    cout << endl << "Working with CountedItem's" << endl << endl;

    cout << "What do you want to create a CountedItem of? ";
    cin >> tofind;
    Item target2(tofind, "", 0); /* TODO: use tofind to initialize */
    auto it2 = find(items.begin(), items.end(), target2);/* TODO: use find() to find Item of items vector with tofind as an ID */
    target2 = *it2;

    // will initialize new CountedItem from existing Item
    CountedItem counted(tofind,target2.getname(),target2.getPrice(),1); 
    char add;
    add = 'y';
    while ('y' == add) {
        cout << "Do you want to add another one? (y/n) ";
        cin >> add;
        if ('y' == add)
            counted.add1();
    }
    cout << "The final object: " << endl;
    cout << counted;

    return 0;
}