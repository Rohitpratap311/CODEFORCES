
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

bool good(ll n)
{
    while(n)
    {
        if(!(n%10==4||n%10==7)) { return false; }
        n/=10;
    }
    return true;
}

void solveCP311()
{
    ll l,r;
    cin>>l>>r;
    ll pre=4444444444;
    ll ans=0;
    for(ll i=1e9;i>=l;i--)
    {
        if(good(i)) { pre=i; }
        if(i<=r)
        {
            ans+=pre;
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