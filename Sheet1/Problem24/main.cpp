#include <iostream>

using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if((l2 > r1 && r2 > r1) || (l2 < l1 && r2 < l1))
       cout << -1;
       else
    {
        int x,z;
        x=max(l1,l2);
        z= min(r1,r2);
        cout << x << " " << z;
    }

    return 0;
}
