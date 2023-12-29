#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a;
    for (n = 1; n <= a; n++)
    {
        if (a <= 1)
        {
            cout << "-1";
        }
        else if(n % 2 == 0)
        {
            cout << n << endl;
        }

    }
    return 0;
}
