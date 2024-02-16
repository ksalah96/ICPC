#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    long long arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        for(int i = x-1; i < y; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}
