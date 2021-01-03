
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll x;
    if(n%2==0) { x=(n-1)/2; }
    else { x=n/2; }
    ll val=arr[x],ans=0;
    for(ll i=0;i<n;i++)
    {
        ans+=abs(arr[i]-val);
    }
    cout<<ans;
    
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
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}