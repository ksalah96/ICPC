    #include <iostream>

    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int k = 1, sp = n-1;
        for(int i = 1; i <= n; i++)
        {

            for(int x = sp;x > 0; x--)
            {
                cout << " ";
            }
                sp--;
            for(int j = 1; j <= k; j++)
            {
                cout << "*";
            }
            k += 2;
            cout << endl;
        }
        for(int i = 1; i <= n; i++)
        {
            if(sp < 0)
                sp++;
            for(int x = sp;x > 0; x--)
            {

                cout << " ";
            }
                sp++;
            k -= 2;
            for(int j = 1; j <= k; j++)
            {

                cout << "*";
            }

            cout << endl;
        }
        return 0;
    }
