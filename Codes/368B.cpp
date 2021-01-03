
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
void solveCP311()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n]={0},uni[n]={0};
    set<ll> s;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=n-1;i>=0;i--)
    {
        s.insert(arr[i]);
        uni[i]=s.size();
    }
    for(ll i=0;i<m;i++)
    {
        ll temp;
        cin>>temp;
        cout<<uni[temp-1]<<endl;
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