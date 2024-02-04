    #include <iostream>
    #include <limits.h>
    using namespace std;

    int main()
    {
        long long n, cntr = 0;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int minn = arr[0];
        for(int i = 0; i < n; i++)
        {

            if(arr[i] < minn)
            {
                cntr = i;
                minn = arr[i];

            }
        }
        cout << minn << " " <<cntr + 1;

        return 0;
    }
