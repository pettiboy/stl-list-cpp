#include <iostream>
#include <list>

using namespace std;

int main() {

    // declaring a list using STL
    list<int> list1_ka_naam; // list of length 0
    list<int> list2(7); // empty list of length 7 (no elements inserted) -- memory for 7 ints has been allocated

    // using push_back()
    list1_ka_naam.push_back(5);
    list1_ka_naam.push_back(6);
    list1_ka_naam.push_back(8);
    list1_ka_naam.push_back(2);

    // printing the list using an iterator
    list<int> :: iterator iterator_ka_naam;
    iterator_ka_naam = list1_ka_naam.begin(); // iterator will now point at begining of the list

    cout<< *iterator_ka_naam << endl; // iterator is pointing at the first element of the list
    
    iterator_ka_naam ++;
    cout<< *iterator_ka_naam << endl; // iterator is now pointing at the next item in the list

    // similarly the entire list can be printed to the terminal
    iterator_ka_naam ++;
    cout<< *iterator_ka_naam << endl;
    iterator_ka_naam ++;
    cout<< *iterator_ka_naam << endl;

    return 0;
}