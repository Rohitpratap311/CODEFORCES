
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n,m;
    cin>>n>>m;
    ll arr[m]={0};
    for(ll i=0;i<n;i++) 
    { 
        ll temp;
        cin>>temp;
        arr[temp-1]++;
    }
    ll ans=0;
    for(ll i=0;i<m-1;i++)
    {
        for(ll j=i+1;j<m;j++)
        {
            ans+=(arr[i]*arr[j]);
        }
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