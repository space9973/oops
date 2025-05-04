#include <bits/stdc++.h>
using namespace std;
class car
{
private:
    int model;
    int id = 1234;

public:
    string brand;
    int year;
    char *name;
    // default constructor
    car()
    {
        cout << "Default constructor called" << endl;
        name = new char[100];
    }
    // paramatrizide constructor
    car(string brand, int year, int model, int id)
    {
        this->brand = brand;
        this->year = year;
        if (this->id == id)
        {
            this->model = model;
        }
        else
        {
            cout << "wrong id" << endl;
        }
    }
    // copy constructor making manualy
    car(const car &temp)
    {
        cout << "Copy constructor called" << endl;
        this->brand = temp.brand;
        this->year = temp.year;
        this->model = temp.model;
        this->id = temp.id;
    }
    void enginesstarted()
    {
        cout << brand << " engine started!" << endl;
        }

    int getmodel()
    {
        return model;
    }
    void setmodel(int model, int id)
    {
        // cout << "this: " << this << endl;
        if (this->id == id)
        {
            this->model = model;
        }
        else
        {
            cout << "Wrong id" << endl;
        }
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};
int main()
{
    car c1("TATA", 1800, 4589, 1234);
    c1.setmodel(8176, 1234);
    char name[5] = "Ford";
    c1.setName(name);
    cout << "Brand: " << c1.brand << endl;
    cout << "Year: " << c1.year << endl;
    cout << "Modle: " << c1.getmodel() << endl;
    // car c1("TATA", 1800, 4589, 1234);
    // c1.enginesstarted();
    // // copy cosntructor
    // car c2(c1);
    // c2.enginesstarted();
    // car1.setmodel(7289, 1234);
    // cout << "Brand: " << car1.brand << endl;
    // cout << "Year: " << car1.year << endl;
    // cout << "Modle: " << car1.getmodel() << endl;
    // car1.enginesstarted();
    // cout << endl;
    // car c2 = car1;
    // // c2.setmodel(8209, 1234);
    // cout << "Brand: " << c2.brand << endl;
    // cout << "Year: " << c2.year << endl;
    // cout << "Modle: " << c2.getmodel() << endl;
    // c2.enginesstarted();

    // cout << &car1 << endl;
    // car1.brand = "TATA";
    // car1.year = 1800;
    // car1.setmodel(454654, 1234);
    // cout << "car Model: " << car1.getmodel() << endl;

    // cout << "Brand: " << car1.brand << endl;
    // cout << "Year: " << car1.year << endl;
    // car1.enginesstarted();

    // cout << "Doing all this using dynamic allocation->......" << endl;

    // car *c1 = new car;
    // cout << c1 << endl;
    // c1->brand = "Ford";
    // c1->year = 1999;
    // c1->setmodel(56989, 1234);
    // cout << "car Model: " << (*c1).getmodel() << endl;
    // cout << "Brand: " << (*c1).brand << endl;
    // cout << "Year: " << (*c1).year << endl;
    // (*c1).enginesstarted();

    // delete c1;
}