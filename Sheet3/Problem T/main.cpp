#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0, sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }
    int x = n;
    for(int i = 0; i < n; i++)
    {
            sum2 += arr[i][x - 1];
            x--;
    }
    int result = sum - sum2;
    if(result < 0)
        result *= -1;

        cout << result << endl;
    return 0;
}
