#include <iostream>

using namespace std;

int main()
{
    int n, cntr = 0, cntr2= 0, check = 0;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cntr2 = n;
    for(int i = 0; i < cntr2; cntr2--)
    {

        if(arr[cntr2-1] == arr[cntr])
        {
            check++;
        }
        cntr++;
    }
    if(check == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
