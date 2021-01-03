
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
ll mod=1e9+7;
void solveCP311()
{
    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(ll i=0;i<n;i++) {  cin>>vec[i]; }
    vector<vector<ll>>vec2(n+1);
    for(ll i=0;i<n;++i)
    {
    vec2[vec[i]].push_back(i);
    }
    ll ans=mod; 
    bool flag=1;
    for(ll i=1;i<n;++i)
    if(vec[i]!=vec[i-1]) flag=0;
    if(flag) ans=0;
    for(ll i=1;i<=n;++i)
    {
        if(vec2[i].empty()) continue;
        ll cnt=0;
        for(ll j=1;j<vec2[i].size();++j)
        {
            if(vec2[i][j]-vec2[i][j-1]!=1)
            {
                ++cnt;
            }
        }
        if(vec2[i][0]!=0) ++cnt;
        if(vec2[i][vec2[i].size()-1]!=n-1) ++cnt;
        ans=min(ans,cnt);
    }
    if(ans!=mod)
        cout<<ans;
    else cout<<0;
        cout<<'\n';
    
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