#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

ll arr[10]={6,2,5,5,4,5,6,3,7,6};
ll count(ll n)
{
    ll ans=0;
    while(n)
    {
        ll temp=n%10;
        ans+=arr[temp];
        n=n/10;
    }
    return ans;
}

void solveCP311()
{
    
    ll a,b;
    cin>>a>>b;
    ll ans=0;
    for(ll i=a;i<=b;i++)
    {
        ans+=count(i);
    }
    cout<<ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}