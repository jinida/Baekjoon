#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == b && a == c)
        cout << 10000 + a * 1000 << "\n";
    else if (a == b || b == c || a == c)
    {
        if (a == b)
            cout << a * 100 + 1000 << "\n";
        else if(a==c)
            cout << a * 100 + 1000 << "\n";
        else
            cout << b * 100 + 1000 << "\n";
    }
    else
    {
        if (a > b)
        {
            if (a > c)
                cout << a * 100 << "\n";
            else
                cout << c * 100 << "\n";
        }
        else
        {
            if (b > c)
                cout << b * 100 << "\n";
            else
                cout << c * 100 << "\n";
        }
    }
}