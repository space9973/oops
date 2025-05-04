#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void showA()
    {
        cout << "Class A\n";
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "Class B\n";
    }
};

class C
{
public:
    void showC()
    {
        cout << "Class C\n";
    }
};

class D : public B, public C
{
public:
    void showD()
    {
        cout << "Class D\n";
    }
};

int main()
{
    D d;
    d.showA(); // from A via B
    d.showB(); // from B
    d.showC(); // from C
    d.showD(); // own method
}
