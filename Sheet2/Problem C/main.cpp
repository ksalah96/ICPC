#include <iostream>

using namespace std;

int main()
{
    int n, even = 0, pos = 0, neg = 0, odd = 0;
    cin >> n;
    for(int a = 1; a <= n; a++)
    {
        int c = 0;
        cin >> c;
            if (c % 2 == 0)
            {
            even++;
            }
            if (c % 2 != 0)
            {
                odd++;
            }
            if (c > 0)
            {
            pos++;
            }
            if (c < 0)
            {
                neg++;
            }
    }

        cout << "Even: " << even << endl;
        cout << "Odd: " << odd << endl;
        cout << "Positive: " << pos << endl;
        cout << "Negative: " << neg << endl;

    return 0;
}
