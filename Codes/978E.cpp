
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n,w;
    cin>>n>>w;
    ll arr[n];
    for(ll i=0;i<n;i++) { cin>>arr[i]; }
    ll maxval=-1,minval=1e10;
    ll change=0;
    ll down=0;
    ll up=0;
    for(ll i=0;i<n;i++)
    {
        change+=arr[i];
        minval=min(minval,change);
        maxval=max(maxval,change);
    }
    if(maxval>w)
    {
        cout<<0;
        return ;
    }
    ll least=min(minval,(ll(0)));
    least=abs(least);
    ll large=min(w,w-maxval);
    cout<<max((ll)0,large-least+1);
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