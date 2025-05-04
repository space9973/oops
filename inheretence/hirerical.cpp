#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating...\n";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking...\n";
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing...\n";
    }
};

int main()
{
    Dog d;
    d.eat();
    d.bark();

    Cat c;
    c.eat();
    c.meow();
}
