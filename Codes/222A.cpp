#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(ll i=k-1;i<n-1;i++)
        {
            if(arr[i+1]!=arr[i])
            {
                cout<<"-1";
                return 0;
            }
        }
        ll ans=k-1;
        for(ll i=k-1;i>=0;i--)
        {
			if(arr[i]==arr[i-1])
			{
				ans--;
			}
			else
			{
				break;
			}
		}
		cout<<ans;
    }
    return 0;
}