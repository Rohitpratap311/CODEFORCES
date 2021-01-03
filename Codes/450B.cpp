
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
void solveCP311()
{
    ll x,y,n;
    cin>>x>>y>>n;
    ll arr[7]={0};
    arr[1]=x;
    arr[2]=y;
    for(ll i=3;i<7;i++)
    {
        arr[i]=arr[i-1]-arr[i-2];
    }
    n=n%6;
    if(n==0) { n=6; }
    ll ans=arr[n]%mod;
    if(ans<0) { ans+=mod; }
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