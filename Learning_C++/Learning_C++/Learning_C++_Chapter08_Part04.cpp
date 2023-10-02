#include<iostream>
using namespace std;

class Shop
{
    int a = 0;
    int itemId[100];
    int itemPrice[100];
    string rank(int a);

public:
    void setItem(void);
    void getItem(void);
};

string Shop :: rank(int a)
{
    if(a == 1)
        {
            return "st";
        }
    else if (a == 2)
        {
            return "nd";
        }
    else if (a == 3)
        {
            return "rd";
        }
    else
        {
            return "th";
        }
}

void Shop :: setItem(void)
{
    cout << "Enter the number of Item you want to store in your shop: ";
    cin >> a;

    for(int i = 0; i < a; i++)
        {
            cout << "\nEnter the ID of the " << i + 1 << rank(i + 1) << " item: ";
            cin >> itemId[i];
            cout << "Enter the price of the Item with ID " << itemId[i] << ": ";
            cin >> itemPrice[i];
        }
}

void Shop :: getItem(void)
{
    for(int i = 0; i < a; i++)
        {
            cout << "\nThe price of the Item with ID " << itemId[i] << " is: Rs" << itemPrice[i] << endl << endl;
        }
}

int main()
{
    Shop Dukaan;
    Dukaan.setItem();
    Dukaan.getItem();

    Shop Dukaan1;
    Dukaan1.setItem();
    Dukaan1.getItem();

    return 0;
}