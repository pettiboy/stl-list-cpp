#include <iostream>
#include <list>

using namespace std;

void print_list(list<int> &list_ka_naam);

// notice how we are taking list by Reference and not by value
int main() {

    // declaring a list using STL
    list<int> list1; 
    // populating list1
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(2);
    list1.push_back(8);

    list<int> list2;
    // populating list2
    list2.push_back(53);
    list2.push_back(46);
    list2.push_back(3);
    list2.push_back(83);
    list2.push_back(9);

    // print original lists
    cout<< "original list1  ";
    print_list(list1);
    cout<< "original list2  ";
    print_list(list2);
    cout<<endl;

    // Sorting the list

    cout<<"after sorting list1  ";
    print_list(list1);

    // merging lists

    cout<< "after merging list2 with list1  ";
    print_list(list1);

    // sorting lists before merging
    
    cout<< "merging lists after sorting them  ";
    print_list(list1);

    // reversing the list

    print_list(list1);


    // Explore more capabilities of lists in C++ using STL
    // no need to rote learn anything you can always look it up!
    // https://www.geeksforgeeks.org/list-cpp-stl/

    return 0;
}


void print_list(list<int> &list_ka_naam) {

    list<int> :: iterator iterator_ka_naam;

    for (iterator_ka_naam = list_ka_naam.begin(); iterator_ka_naam != list_ka_naam.end(); iterator_ka_naam++) {
        cout << *iterator_ka_naam << "  ";
    }

    cout << endl;
}