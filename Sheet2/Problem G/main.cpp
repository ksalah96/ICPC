#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        long long fact = 1;
        cin >> i;
        for(i; i >= 1; i--)
        {
            fact *= i;
        }
        cout << fact << endl;
    }

    return 0;
}
