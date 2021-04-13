#include <iostream>
#include <list>

using namespace std;

// notice how we are taking list by Reference and not by value
void print_list(list<int> &list_ka_naam) {

    list<int> :: iterator iterator_ka_naam;

    for (iterator_ka_naam = list_ka_naam.begin(); iterator_ka_naam != list_ka_naam.end(); iterator_ka_naam++) {
        cout << *iterator_ka_naam << "  ";
    }

    cout << endl;
}


int main() {

    // declaring a list using STL
    list<int> list1; // list of length 0

    // using push_back()
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(2);

    // printing list using a function
    print_list(list1);

    list<int> list2(3); // empty list of length 3 (no elements inserted) -- memory for 3 ints has been allocated

    
    // adding values to list using iterator
    list<int> :: iterator iterator_ka_naam;

    iterator_ka_naam = list2.begin(); // point iterator to begining of list
    
    *iterator_ka_naam = 25;
    iterator_ka_naam ++;
    *iterator_ka_naam = 58;
    iterator_ka_naam ++;
    *iterator_ka_naam = 5;
    iterator_ka_naam ++;

    print_list(list2);

    return 0;
}