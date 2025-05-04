#include <bits/stdc++.h>
using namespace std;
class print
{
public:
    void show()
    {
        cout << "Hi How are you" << endl;
    }
    void show(int x)
    {
        cout << "The value is " << x << endl;
    }
    void show(int a, int b, int c)
    {
        cout << "The product is " << a * b * c << endl;
    }
};
int main()
{
    print p1;
    p1.show();
    p1.show(3);
    p1.show(2, 3, 4);
}