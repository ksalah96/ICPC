#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int cntr = 0;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            cntr++;
            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] >= arr[j-1])
                    cntr++;
                else
                    break;
            }
        }
    cout << cntr << endl;
    }
    return 0;
}
