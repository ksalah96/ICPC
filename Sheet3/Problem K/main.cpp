#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int arr[n];
    string str;
    cin >> str;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int temp = str[i] - '0';
        arr[i] = temp;
    }

    int t = 0;
    for(int i = 0; i < n; i++)
    {
        t += arr[i];
    }
    cout << t << endl;

    return 0;
}
