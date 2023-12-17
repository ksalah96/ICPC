#include <iostream>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    long long a, b, c;
    a = x % 10;
    b = y % 10;
    c = a + b;
    cout << c;
    return 0;
}
