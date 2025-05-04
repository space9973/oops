#include <bits/stdc++.h>
using namespace std;
class car
{
private:
    int model;
    int year;
    string code = "de@#ep";

public:
    // setter
    void setmodel(int model, string code)
    {
        if (this->code == code)
        {
            this->model = model;
        }
        else
        {
            cout << "Invalide code" << endl;
        }
    }
    void setyear(int year, string code)
    {
        if (this->code == code)
        {
            this->year = year;
        }
        else
        {
            cout << "Invalide code" << endl;
        }
    }
    // getter
    int getmodel()
    {
        return model;
    }
    int getyear()
    {
        return year;
    }
};
int main()
{
    car c1;
    c1.setmodel(12345, "de@#ep");
    c1.setyear(1999, "de@#ep");
    cout << "Model : " << c1.getmodel() << endl;
    cout << "Year : " << c1.getyear() << endl;
}