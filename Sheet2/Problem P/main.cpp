#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    for(int i = 1; i <= a; a--)
    {
        b = a;

        for(int j = 1; j <= b; b--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
