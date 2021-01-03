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
        ll n,s;
        cin>>s>>n;
        string ans="YES";
        multimap<ll,ll> m;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            m.insert(pair<ll,ll>(x,y));
        }
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            //cout<<itr->first<<' '<<itr->second<<endl;
            if(s>itr->first) { s+=itr->second; }
            else { ans="NO";  break; }
        }
        cout<<ans;
    }
    return 0;
}