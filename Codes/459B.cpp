#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;



ll binomialCoeff(ll n, ll k)
{
	ll res = 1;
	if (k > n - k)
		k = n - k;

	for (ll i = 0; i < k; ++i)
    {
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++) { cin>>arr[i]; }
        sort(arr,arr+n);
        ll min=1,max=1;
        ll diff=arr[n-1]-arr[0];
        for(ll i=0;i<n-1;i++)
        {
            if(arr[i+1]==arr[i]) {min++;}
            else { break; }
        }
        for(ll i=n-1;i>0;i--)
        {
            if(arr[i-1]==arr[i]) {max++;}
            else { break; }
        }
        ll ans;
        if(diff==0) {ans=binomialCoeff(n,2);} else ans=min*max;
        cout<<diff<<' '<<ans;

    }
    return 0;
}
