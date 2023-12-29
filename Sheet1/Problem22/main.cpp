#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (a < b)
    {
      if (s == 60)
        cout << "Right";
      else
        cout << "Wrong";
    }
    else if (a > b)
    {
        if (s == 62)
            cout << "Right";
        else
            cout << "Wrong";
    }
    else if (a == b)
    {
        if (s == 61)
            cout << "Right";
        else
            cout << "Wrong";
    }
    return 0;
}
