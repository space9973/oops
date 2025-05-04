#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    void nature()
    {
        cout << "Animal have nature of animal" << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dogs usually bark" << endl;
    }
};
class puppy : public Dog
{
public:
    void cute()
    {
        cout << "Puppy are cute" << endl;
    }
};

int main()
{
    puppy p1;
    p1.bark();
    Dog d1;
    d1.nature();
}
