#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        cin >> i;
        cout << max(i);
    }
    return 0;
}
