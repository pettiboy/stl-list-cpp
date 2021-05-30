#include <iostream>
#include <list>

using namespace std;

void print_list(list<int> &list_ka_naam);

int main() {

    // declaring a list1 using STL
    list<int> list1; 
    // populating list1
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(2);
    list1.push_back(8);

    // printing actual list
    cout<< "original list:  ";
    print_list(list1);

    // using pop_back()

    cout<< "after pop_back():  ";
    print_list(list1);

    // using pop_front()

    cout<< "after pop_front():  ";
    print_list(list1);

    // removing element from middle of list

    cout<<"after removing '8' from list:  ";
    print_list(list1);

    return 0;
}

void print_list(list<int> &list_ka_naam) {

    list<int> :: iterator iterator_ka_naam;

    for (iterator_ka_naam = list_ka_naam.begin(); iterator_ka_naam != list_ka_naam.end(); iterator_ka_naam++) {
        cout << *iterator_ka_naam << "  ";
    }

    cout << endl;
}