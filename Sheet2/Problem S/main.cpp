#include <iostream>

using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> x >> y;
        int sum = 0;
        int minn = min(x,y);
        int maxx = max(x,y);
            for(int j = minn; j < maxx; j++)
                {

                    while(j % 2 != 0)
                    {
                        if(j == minn)
                            break;
                        else
                        sum += j;
                        j++;
                    }

                }
    cout << sum << endl;
    }


    return 0;
}
