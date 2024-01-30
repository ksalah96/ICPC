#include <iostream>

using namespace std;

int main()
{
    int a, b, cntr = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        int n = i;
        bool ch = 0;
        while(n != 0)
        {
            int digit = n % 10;
            n /= 10;
        if(digit != 7 && digit != 4)
        {
            ch = 1;

        }
        }
        if(ch == 0)
        {
            cout << i << " ";
            cntr++;
        }
    }
      if(cntr == 0)
        {
            cout<< -1;
        }

    return 0;
}
