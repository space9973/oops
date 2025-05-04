#include <bits/stdc++.h>
using namespace std;

class Engine
{
public:
    void start()
    {
        cout << "This is start sound" << endl;
    }
};
class musicsystem
{
public:
    void music()
    {
        cout << "This is Boss music system" << endl;
    }
};
class car : public Engine, public musicsystem
{
public:
    void system()
    {
        cout << "This is system" << endl;
    }
};
int main()
{
    car c1;
    c1.music();
    c1.start();
}