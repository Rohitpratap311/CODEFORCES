
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=1e10;
    for(ll i=-1;i<=1;i++)
    {
        ll a1=a+i;
        for(ll j=-1;j<=1;j++)
        {
            ll b1=b+j;
            for(ll k=-1;k<=1;k++)
            {
                ll c1=c+k;
                ll x=abs(a1-b1)+abs(a1-c1)+abs(b1-c1);
                ans=min(x,ans);
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}