#include <iostream>
#include <list>

using namespace std;

// notice how we are taking list by Reference and not by value
// function that prints the list
void print_list(list<int> &list_ka_naam) {

    // list<int> :: iterator ;

    // for (; ; ) {
    //     cout <<  << "  ";
    // }

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

        // point iterator to beginning of list
    
        // make pointer = 1st element in the list
        // increment iterator

    // print list2
    print_list(list2);

    return 0;
}