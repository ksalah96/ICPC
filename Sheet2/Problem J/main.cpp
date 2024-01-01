#include <iostream>

using namespace std;

int main()
{
    int n, c = 0, b = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i % j == 0)
            {
                c++;
            }
            if (c == 2)
            {
                cout << i << " ";
            }
        }
    }


    return 0;
}
