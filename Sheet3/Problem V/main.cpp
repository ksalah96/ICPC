#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int farr[m+1] = { };
    for(int i = 0; i < n; i++)
    {
        farr[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << farr[i] << endl;
    }

    return 0;
}
