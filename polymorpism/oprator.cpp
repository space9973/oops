#include <bits/stdc++.h>
using namespace std;
class Number
{
public:
    int value;

    // Constructor to initialize value
    Number(int val) : value(val) {}

    // Overloaded + operator (subtraction)
    Number operator*(Number &other)
    {
        cout << "this.value : " << this->value << endl;
        cout << "other.value : " << other.value << endl;
        Number ans(0);
        ans.value = this->value - other.value;
        cout << "ans.value :" << ans.value << endl;
        return ans;
    }
    void show()
    {
        cout << "Value : " << value << endl;
    }
};
int main()
{
    Number num1(30);
    // num1.value = 30;

    Number num2(10);
    // num2.value = 10;

    Number result = num1 * num2;
    cout << "result.value : " << result.value << endl;
    result.show();
}