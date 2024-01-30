#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d, r;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    r = a * b * c * d;
    if(r % 100 <=9)
        cout << 0;
    cout << r % 100;
    return 0;
}
