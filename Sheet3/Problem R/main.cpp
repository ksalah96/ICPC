#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);
    bool check = 1;
    for(int i = 0; i < n; i++)
    {
            if(a[i] != b[i])
            {
                check = 0;
            }
    }
    if(check == 1)
    {
    cout << "yes" << endl;
    }
    else
    cout << "no" << endl;

    return 0;
}
