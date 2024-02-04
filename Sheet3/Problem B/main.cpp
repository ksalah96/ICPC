#include <iostream>

using namespace std;

int main()
{
    long long n = 0, x;
    bool check = false;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    for(int i = 0; i < n; i++)
    {
        if(x == arr[i])
        {
            cout << i << endl;
            check = true;
            break;
        }
    }
    if (check == false)
    {
        cout << "-1" << endl;
    }
    return 0;
}
