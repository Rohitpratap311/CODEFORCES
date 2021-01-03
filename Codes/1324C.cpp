
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    vector<ll> R;
    string s;
    cin>>s;
    ll n=s.size();
    R.push_back(0);
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            R.push_back(i+1);
        }
    }
    R.push_back(n+1);
    ll ans=-1;
    ll x=R.size()-1;
    for(ll i=0;i<x;i++)
    {
        ans=max(R[i+1]-R[i],ans);
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