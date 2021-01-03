#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void dfs(vector<ll> adj[],ll visited[],ll s,ll x,string &ans)
{
    visited[s]=1;
    if(x-1==s) { ans="YES"; }
    for(auto i:adj[s])
    {
        if(visited[i]==0)
        {
            dfs(adj,visited,i,x,ans);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        string ans="NO";
        ll visited[n]={0};
        vector<ll> adj[n];
        for(ll i=0;i<n-1;i++)
        {
            ll temp;
            cin>>temp;
            adj[i].push_back(i+temp);
        }
        dfs(adj,visited,0,x,ans);
        cout<<ans;
    }
    return 0;
}