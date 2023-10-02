#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
protected:
    string title;
    float ratings;
public:
    Vehicle(string s, float r)
    {
        title = s;
        ratings = r;
    }
    virtual void display() {}
};

class Car : public Vehicle
{
    float weight;
public:
    Car(string s, float r, float wh) : Vehicle(s, r)
    {
        weight = wh;
    }
    void display()
    {
        cout << "This is an amazing car with name: " << title
             << endl;
        cout << "Ratings: " << ratings << " out of 5 stars"
             << endl;
        cout << "Weight of the car is: " << weight << "Kg" << endl;
    }
};

class Bike : public Vehicle
{
    float weight;
public:
    Bike(string s, float r, float wh) : Vehicle(s, r)
    {
        weight = wh;
    }
    void display()
    {
        cout << "This is an amazing bike with name: " << title
             << endl;
        cout << "Ratings: " << ratings << " out of 5 stars"
             << endl;
        cout << "Weight of the bike is: " << weight << "Kg"
             << endl;
    }
};

int main()
{
    string title;
    float ratings, weight;

    title = "BMW";
    ratings = 4.79;
    weight = 500.54;
    Car new_Car(title, ratings, weight);
    // new_Car.display();

    title = "Royal Enfield";
    ratings = 4.11;
    weight = 176.32;
    Bike new_Bike(title, ratings, weight);
    // new_Bike.display();

    Vehicle *series[2];
    series[0] = &new_Car;
    series[1] = &new_Bike;

    series[0]->display();
    cout << endl;
    series[1]->display();

    return 0;
}

/*
Rules for Virtual function are --->
1. They cannot be static.
2. They are accessed by object pointer.
3. Virtual functions can be a friend of another class.
4. A Virtual function in base class might not be used.
5. If Base class Virtual function is not redifined in Derived
   class then Base class virtual function will be invoked.
6. If a Virtual function is defined in base class, there is no
   necessity of redefining it in the derived class.
*/