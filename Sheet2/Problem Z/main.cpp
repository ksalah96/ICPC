#include <iostream>

using namespace std;

int main()
{
    int k, s;
    cin >> k >>s;
    int cntr = 0;
    for(int i = 0; i <= k; i++)
    {
        for(int j = 0; j <= k; j++)
        {
        if(s-i-j >= 0 && s - i -j <= k)
        {
                cntr++;
        }
    }
    }
    cout << cntr << endl;
    return 0;
}