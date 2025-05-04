#include <bits/stdc++.h>
using namespace std;
class car
{
public:
    void move()
    {
        cout << "car are moving" << endl;
    }
};
class TATA : private car
{
public:
    void honk()
    {
        cout << "TATA Honking" << endl;
    }
    void startmove()
    {
        return move();
    }
};
int main()
{
    TATA c1;
    c1.startmove();
    c1.honk();
}