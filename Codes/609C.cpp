
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
    ll arr[n],sum=0,arr2[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        arr2[i]=arr[i];
    }
    ll ans=0;
    sort(arr2,arr2+n);
    reverse(arr2,arr2+n);
    for(ll i=0;i<n;i++)
    {
        ll temp=(abs(arr[i]-arr2[i]))/2;
        ans+=temp;
    }
    cout<<ans/2;
    
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