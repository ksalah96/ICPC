#include <iostream>

using namespace std;

int main()
{
    int n, cntr = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cntr++;
        for(int j = 1; j <= cntr; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
