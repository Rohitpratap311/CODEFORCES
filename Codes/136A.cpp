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
    vector<ll> a(n),b(n+1);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]=i+1;
    }
    for(ll i=1;i<n+1;i++)
    {
        cout<<b[i]<<" ";
    }
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