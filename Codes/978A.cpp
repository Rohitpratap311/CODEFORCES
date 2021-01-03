
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<ll> s;
    vector<ll> vec;
    for(ll i=n-1;i>=0;i--)
    {
        ll x=arr[i];
        if(s.find(x)==s.end())
        {
            vec.push_back(x);
            s.insert(x);
        }
    }
    reverse(vec.begin(),vec.end());
    cout<<vec.size()<<endl;
    for(auto x:vec) { cout<<x<<" "; }
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