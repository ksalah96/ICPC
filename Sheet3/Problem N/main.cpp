    #include <iostream>
    #include <string>

    using namespace std;

    int main()
    {
        int a, b;
        string s;
        cin >> a >> b;
        cin >> s;
        if(s[a] != '-')
        {
            cout << "No";
            return 0;
        }
        int len = s.length();
        bool ch = 1;
        for(int i = 0; i < len; i++)
        {
            if((s[i] < '0' || s[i] > '9') && i != a)
            {
                ch = 0;
            }
        }
        if(ch == 0)
            cout << "No";
        else
            cout << "Yes";
        return 0;
    }
