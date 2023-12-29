#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d, r;
    cin >> a >> b >> c >> d;
    r = (a % 100 * b % 100 * c % 100 * d % 100) % 100;
     cout << r;
    return 0;
}
