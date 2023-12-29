#include <iostream>

using namespace std;

int main()
{
    char x, y;
    cin >> x;
    if (x >= 65 && x <= 90)
    {
        y = x + 32;
        cout << y;
    }
    else if (x >= 97 && x <= 122)
    {
        y = x - 32;
        cout << y;
    }
    return 0;
}
