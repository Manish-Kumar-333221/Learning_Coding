#include<iostream>
using namespace std;

class Shop
{
    int id;
    int price;
public:
    void setData(int x, int y)
    {
        id = x;
        price = y;
    }

    void getData()
    {
        cout << "ID of the item is: " << id << endl;
        cout << "Price of the item is: " << price
             << endl << endl;
    }
};

int main()
{
    int size = 5;

    int *a = &size;

    int *b = new int[size];
    delete []b;


    Shop *c = new Shop[6];

    (c + 0)->setData(1001, 32);
    (c + 0)->getData();

    (c + 1)->setData(1002, 47);
    (c + 1)->getData();

    (c + 2)->setData(1003, 73);
    (c + 2)->getData();

    (c + 3)->setData(1004, 84);
    (c + 3)->getData();

    (c + 4)->setData(1005, 18);
    (c + 4)->getData();

    (c + 5)->setData(1006, 65);
    (c + 5)->getData();

    delete[] c;

    int ID, Price;
    Shop *d = new Shop[size];
    for (int i = 0; i < size; i++)
        {
            cout << "Enter the Id and Price for the Item No.:"
                 << i + 1 <<": ";
            cin >> ID >> Price;
            (d + i)->setData(ID, Price);

        }
    cout << endl;
    for (int i = 0; i < size; i++)
        {
            cout << "Item Number: " << i + 1 << endl;
            (d + i)->getData();
        }
    delete []d;

    return 0;
}
