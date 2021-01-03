
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll minval=arr[n-1];
    ll ans=0;
    for(ll i=n-2;i>=0;i--)
    {
        if(arr[i]>minval) { ans++; }
        minval=min(minval,arr[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}