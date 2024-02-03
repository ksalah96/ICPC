#include <iostream>

using namespace std;

int main()
{
    int n , a, b, t_sum = 0;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        int x = i;
        while(x != 0)
        {
            sum += x % 10;
            x /= 10;
        }
        if(sum >= a && sum <= b)
        {
            t_sum += i;
        }
    }
    cout << t_sum << endl;

    return 0;
}
