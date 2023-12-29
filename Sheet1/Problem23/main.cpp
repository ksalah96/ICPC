    #include <iostream>

    using namespace std;

    int main()
    {
        int a, b, c, r;
        char s, q;
        cin >> a >> s >> b >> q >> c;
        if (a + b == c || a - b == c || a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            if(s == 43)
            {
                cout << a + b;
            }
            else if( s == 45)
            {
                cout << a - b;
            }
            else if(s == 42)
            {
                cout << a * b;
            }

        return 0;
        }
    }


