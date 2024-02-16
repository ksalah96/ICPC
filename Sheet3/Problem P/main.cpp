    #include <iostream>
    #include <limits.h>

    using namespace std;

    int main()
    {
      int n;
      cin >> n;
      int arr[n];
      for(int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      int num = 0, minn = arr[0];
      for(int i = 0; i < n; i++)
      {
          num = 0;
          while(arr[i] % 2 == 0)
          {
              num++;
              arr[i] /=2;
          }
          if(num < minn)
            minn = num;
      }
      cout << minn << endl;

        return 0;
    }
