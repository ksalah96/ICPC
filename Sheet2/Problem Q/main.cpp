#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cin >> n;
        if(n == 0)
            cout << 0;
        while(n != 0)
        {
            int div;
            div = n % 10;
            if(n > 9)
            cout << div << " ";
            else
                cout << div;
            n = n / 10;
        }
        cout << endl;
    }
    return 0;
}
