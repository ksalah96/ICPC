#include <iostream>

using namespace std;

int main()
{
    int x, y, s, d;
    double m;
    cin >> x;
    //age in year
    y = x / 365;
    s = x % 365;
    m = s / 30;
    d = s % 30;
    cout << y << " " << "years" << endl;
    cout << m << " " << "months" << endl;
    cout << d << " " << "days";
    return 0;
}
