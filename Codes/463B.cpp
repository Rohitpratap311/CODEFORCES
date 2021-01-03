#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void solveCP311()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll e=0;
    ll h=0;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(e+h-a[i]<0)
        {
            ans+=abs(e+h-a[i]);
            h=h+abs(e+h-a[i]);
        }
        e=e+(h-a[i]);
        h=a[i];
    }
    cout<<ans<<" "<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}