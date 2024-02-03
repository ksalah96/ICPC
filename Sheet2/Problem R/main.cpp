#include <iostream>

using namespace std;

int main()
{
    int n, m;
    while(true)
    {
        cin >> n >> m;
        if(n <= 0 || m <= 0)
            break;
            else
            {
        int mann = min(n, m);
        int maxx = max(n, m);
        int sum = 0;
        for(int i = mann; i <= maxx; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;

    }
    }

    return 0;
}
