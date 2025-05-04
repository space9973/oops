#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    virtual void sound()
    {
        cout << "This is animal sound";
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "This is dog Bark" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "This is cat  sound" << endl;
    }
};
int main()
{
    Animal *a; // base class pointer
    Dog d;
    Cat c;
    a = &d;
    a->sound(); // Output: Dog barks
    a = &c;
    a->sound(); // Output: Cat meows
    return 0;
}