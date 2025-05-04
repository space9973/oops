#include <bits/stdc++.h>
using namespace std;

// virtual->"This function can be overridden in a derived class, and when it's called through a base class pointer or reference, the correct function should be chosen at runtime — not compile time."
class shape // Abstract class
{
public:
    virtual void area() = 0; // pure function
};
class Rectangle : public shape
{
public:
    void area() override
    {
        cout << "The area is rectnage is length * breadth" << endl;
    }
};
class Circle : public shape
{
public:
    void area() override
    {
        cout << "The area is circle is pi * r * r" << endl;
    }
};
int main()
{
    shape *s;
    Rectangle r;
    Circle c;
    s = &r;
    s->area();
    s = &c;
    s->area();
}