#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    int y = 1;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {

        if(i == 1)
        {
            cout << x << " ";
            continue;
        }
        if(i == 2)
        {
            cout << y << " ";
            continue;
        }
            result = x + y;
            x = y;
            y = result;
            cout << result << " ";
    }


    return 0;
}
