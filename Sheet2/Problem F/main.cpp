#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int a = 1; a <= 12; a++)
    {
        int mul = n * a;
        cout << n << " * " << a << " = " << mul << endl;
    }
    return 0;
}
