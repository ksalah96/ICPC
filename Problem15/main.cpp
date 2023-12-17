#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    char s;
    cin >> x >> s >> y ;
    if(s == 42)
    {
        z = x * y;
        cout << z;
    }
    else if(s == 43)
    {
        z = x + y;
        cout << z;
    }
      else if(s == 45)
    {
        z = x - y;
        cout << z;
    }
     else if(s == 47)
    {
        z = x / y;
        cout << z;
    }
    return 0;
}
