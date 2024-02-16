#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minn = arr[0];
    int t = 0;
    for(int i = 0; i <= n; i++)
    {
        if(arr[i] < minn)
            minn = arr[i];
    }
    for(int i = 0; i <= n; i++)
    {
        if(minn == arr[i])
            t++;
    }
    if(t % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }
    return 0;
}
