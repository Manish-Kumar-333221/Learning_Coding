#include<iostream>
#include<vector>
/*
Iterator:
1. begin()✓
2. end()✓
3. rbegin()
4. rend()
5. cbegin()
6. cend()
7. crbegin()
8. crend()

Capacity:
1. size()✓
2. max_size()✓
3. capacity()
4. resize(n)
5. empty()✓
6. shrink_to_fit()
7. reserve()

Element acess:
1. reference operator [0]✓
2. at(0)✓
3. front()✓
4. back()✓
5. data()

Modifiers:
1. assign()✓
2. push_back()✓
3. pop_back()✓
4. insert()✓
5. erase()✓
6. swap()✓
7. clear()✓
8. emplace()
9. emplace_back()
*/
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

    if (v.empty())
        {
            cout << "Vector is empty" << endl;
        }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
        {
            cout<<"Enter an element to add to this vector:";
            cin >> element;
            vec1.push_back(element);
        }
    cout << "\nMaximum size of the vector vec1 is: "
         << vec1.max_size() << endl;

    cout << "\nValues in vector vec1 are: " << endl;
    display(vec1);

    vec1.pop_back();
    cout << "\nValues in vector vec1 after using pop_back() function are: " << endl;
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 50);
    cout << "\nValues in vector vec1 after using insert() functon are: " << endl;
    display(vec1);

    vec1.insert((iter + 1), 6, 100);
    cout << "\nValues in vector vec1 after using insert() function are: " << endl;
    display(vec1);

    // lvec1.erase(vec1.begin() + 1);
    vec1.erase(vec1.begin() + 1, vec1.begin() + 5);
    cout << "Values of vector vec1 after erasing from 2 to 5 are: " << endl;
    display(vec1);

    cout << endl;

    vector<int> vec2;
    cout << "Enter the size of your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
        {
            cout<<"Enter an element to add to this vector: ";
            cin >> element;
            vec2.push_back(element);
        }

    cout << "\nMaximum size of the vector vec2 is: "
         << vec2.max_size() << endl;

    cout << "\nFirst value of vec2 is: " << vec2.front() << endl;
    cout << "\nLast value of vec2 is: " << vec2.back() << endl;

    cout << "\nValues in vector vec2 after assigning 5 time 10 to it are: " << endl;
    vec2.assign(5, 10);
    display(vec2);

    cout << "\nValues in vector vec1 before swaping are: "
         << endl;
    display(vec1);
    cout << "Values in vector vec2 before swaping are: "
         << endl;
    display(vec2);
    vec1.swap(vec2);
    cout << "\nValues in vector vec1 after swaping are: "
         << endl;
    display(vec1);
    cout << "Values in vector vec2 after swaping are: "
         << endl;
    display(vec2);

    cout << "\nValues in vector vec2 after clearing it are: "
         << endl;
    vec2.clear();
    display(vec2);

    vector<int> vec01;      // zero length integer vector
    vector<char> vec02(4);  // 4-element charoacter vector
    vector<char> vec03(vec02);// 4-element character vector from vec02
    vector<int> vec04(6, 3); // 6-element vector of 3s

    return 0;
}