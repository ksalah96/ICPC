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
        int x;
        cin >> x;
        bool check = 0;
        for(int i = 0; i < n; i++)
        {
            if(x == arr[i])
            {
                check = 1;
                break;
            }
        }
        if(check == 1)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}
