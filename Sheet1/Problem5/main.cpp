#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double r;
    cin >> r;
    double pi = 3.141592653;
    double a = pi * (r * r);

    cout << setprecision(11) << a;
    return 0;
}
