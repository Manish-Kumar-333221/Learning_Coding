#include<iostream>
#include<list>
using namespace std;

template <class T>
void display(list<T> lst)
{
    list<int> :: iterator iter;
    for (iter = lst.begin(); iter != lst.end(); ++iter)
        {
            cout << *iter << " ";
        }
    if (lst.empty())
        {
            cout << "list is empty";
        }
    cout << endl;
}
int main()
{
    list<int> list1;// empty list of 0 element.
    list1.push_back(50);
    list1.push_back(40);
    list1.push_back(30);
    list1.push_back(30);
    list1.push_back(10);
    list1.push_back(30);
    list1.push_back(20);
    list1.push_back(5);
    cout << "Displaying all the element in the list list1"
         << endl;
    display(list1);
    list1.pop_back();
    cout << "Deleting the last element of the list list1"
         << endl;
    display(list1);
    list1.pop_front();
    cout << "Deleting the first element of the list list1"
         << endl;
    display(list1);
    list1.remove(30);
    cout << "Removing element 30 from the list list1" << endl;
    display(list1);
    list1.reverse();
    cout << "Revesring the list list1" << endl;
    display(list1);
    list1.sort();
    cout << "Sorting all the elements of list list1" << endl;
    display(list1);

    cout << endl;

    list<int> list2(3); // empty list of 3 elements.
    list<int> :: iterator iter = list2.begin();
    // *iter = 45;
    // iter++;
    *iter++ = 45; // it is better way instead of above;
    *iter++ = 27;
    *iter++ = 5;
    cout << "Displaying all the element in the list list2"
         << endl;
    display(list2);
    list2.reverse();
    cout << "Revesring the list list2" << endl;
    display(list2);
    list2.sort();
    cout << "Sorting all the elements of list list2" << endl;
    display(list2);
    list1.merge(list2);
    cout << "Merging all the elements of list2 in list1"
         << endl;
    cout << "Displaying all the element in the list list1"
         << endl;
    display(list1);
    cout << "Displaying all the element in the list list2"
         << endl;
    display(list2);

    return 0;
}
