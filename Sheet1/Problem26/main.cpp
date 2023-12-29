    #include <iostream>
	#include <math.h>

	    using namespace std;

	    int main()
	    {
	        long long a, b , c, d, l, o ;
	        cin >> a >> b >> c >> d;
	        l = pow(a,b);
	        o = pow(c,d);
	        if(l > o)
	        {
	            cout << "YES";
	        }
	        else
	        {
	            cout << "NO";
	        }

	        return 0;
	    }
