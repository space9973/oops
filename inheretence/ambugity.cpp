#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void show() { cout << "Class A\n"; }
};

class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
};

int main()
{
    D obj;
    // obj.C::show();
}

// Both B and C inherit from A, so when D inherits both, it ends up with two copies of A, causing ambiguity.
// virtual tells the compiler to create only one shared copy of A, even though it's inherited twice.

// So D has one unique A, shared between B and C.