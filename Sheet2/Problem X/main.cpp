    #include <iostream>
    #include <cmath>

    using namespace std;

    int main()
    {
        int n, x, mod;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            int result = 0;
            int k = 0;
            cin >> x;
            while (x != 0)
            {
                mod = x % 2;
                if(mod == 1)
                    {
                        result += (mod * pow(2, k));
                        k++;
                    }
            x /= 2;
            }
            cout << result << endl;
        }

        return 0;
    }
