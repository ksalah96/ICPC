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
    int maxx = arr[0];
    int minn = arr[0];
    int maxpos = 0;
    int minpos = 0;
    int temp;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > maxx)
        {
            maxx = arr[i];
            maxpos = i;
        }

        else if(arr[i] < minn)
        {
            minn = arr[i];
            minpos = i;
        }
    }
    temp = arr[maxpos];
    arr[maxpos] = arr[minpos];
    arr[minpos] = temp;
        for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
