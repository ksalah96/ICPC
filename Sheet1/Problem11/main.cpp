#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c && b <= c)
    {
        cout << a << " " << c;
   }
    else if (a <= b && a <= c && c <= b)
    {
        cout << a << " " << b;
    }
     else if (b <= a && b <= c && a <= c)
    {
        cout << b << " " << c;
    }
     else if (b <= a && b <= c && c <= a)
    {
        cout << b << " " << a;
    }
     else if (c <= a && c <= b && a <= b)
    {
        cout << c << " " << b;
    }
     else if (c <= a && c <= b && b <= a)
    {
        cout << c << " " << a ;
    }
    return 0;
}
