#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, n;
    cin >> x;
    int y;
    y = floor(x);
    if (x == y)
    {
        cout << "int" << " " << x;
    }
    else
    {
        n = x - y;
        cout << "float" << " " << y << " "  << n;
    }
    return 0;

}
