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
        ll n,m;
        cin>>n>>m;
        ll arr[m];
        for(ll i=0;i<m;i++) { cin>>arr[i]; }
        sort(arr,arr+m);
        ll ans=1e18;
        for(ll i=0;i+n-1<m;i++)
        {
            ll diff=arr[i+n-1]-arr[i];
            ans=min(diff,ans);
        }
        cout<<ans;
        
    }
    return 0;
}