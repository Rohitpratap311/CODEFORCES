
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++) { cin>>arr[i]; }
    //sort(arr,arr+n);
    ll x=arr[k-1];
    if(x==0)
    {

        ll ans=k;
        for(ll i=k-1;i>=0;i--)
        {
            if(arr[i]==0) { ans--; }

        }
        cout<<ans;
    }
    else
    {
        ll ans=k;
        for(ll i=k;i<n;i++)
        {
            if(arr[i]==arr[k-1]) { ans++; }
        }
        cout<<ans;
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
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}