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
        ll arr[m],arr2[m],temp=n;
        for(ll i=0;i<m;i++) { cin>>arr[i]; arr2[i]=arr[i];}
        ll min=0,max=0;
        sort(arr,arr+m);
        while(temp--)
        {
            max+=arr[m-1]; arr[m-1]--;
            sort(arr,arr+m);
        }
        sort(arr2,arr2+m);
        while(n--)
        {
            ll x=0;
            while((arr2[x]<=0)&&x<m) { x++; }
            min+=arr2[x]; arr2[x]--;
            sort(arr2,arr2+m);
        }
        cout<<max<<' '<<min;
    }
    return 0;
}