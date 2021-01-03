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
    ll arr[n],arr2[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[arr[i]-1]=i;
    }
    ll ans=0;
    for(ll i=0;i<n-1;i++)
    {
        ans+=abs(arr2[i]-arr2[i+1]);
    }
    cout<<ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}