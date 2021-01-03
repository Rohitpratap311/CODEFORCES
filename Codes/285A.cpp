#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    for(ll i=k+1;i>0;i--) cout<<i<<' ';
    for(ll i=k+2;i<=n;i++) cout<<i<<' ';
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