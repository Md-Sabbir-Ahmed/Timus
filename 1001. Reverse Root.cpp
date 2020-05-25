#include<bits/stdc++.h>
using namespace std;

int rev()
{
	long long n;
	  while(cin >> n)
    {
    	rev();
        cout << fixed << setprecision(4) << sqrt(n) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
     rev();

    return 0;
}

