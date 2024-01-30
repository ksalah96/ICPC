#include <iostream>

using namespace std;

int main()
{
    int n, i, maxx = 0;
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        cin >> i;
        if(i > maxx)
        {
            maxx = i;
        }

    }
    cout << maxx << endl;
    return 0;
}
