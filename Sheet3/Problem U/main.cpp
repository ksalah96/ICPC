#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long a[n], b[m];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int cntr = 0, z = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == b[z])
        {
            cntr++;
            z++;
        }
    }
    if(cntr == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
