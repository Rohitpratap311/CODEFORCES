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
        ll n,x;
        cin>>n>>x;
        ll a[n],b[n];
        for(ll i=0;i<n;i++) { cin>>a[i]; }
        for(ll i=0;i<n;i++) { cin>>b[i]; }
        if(a[0]==0) { cout<<"NO"; }
        else if(a[x-1]==0&&b[x-1]==0) { cout<<"NO"; }
        else if(a[x-1]==0)
        {
            for(ll i=x;i<n;i++)
            {
                if(a[i]==1&&b[i]==1)
                {
                    cout<<"YES";
                    return 0;
                }
            }
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }

    }
    return 0;
}