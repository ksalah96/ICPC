#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool check = 1;
    int x;
    cin >> x;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(x == a[i][j])
            {
                check = 0;
                break;
            }
        }
    }
    if(check == 0)
        cout << "will not take number" << endl;
    else
        cout << "will take number" << endl;

    return 0;
}
