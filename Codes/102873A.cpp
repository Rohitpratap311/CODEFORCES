
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    set<ll> s;
    for(ll i=0;i<k;i++)
    {
        ll temp;
        cin>>temp;
        s.insert(temp);
    }
    ll x=s.size();
    if(n-x==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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