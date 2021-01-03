
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll n,m;

vector<ll> path;
void dfs(ll s,vector<ll> adj[], vector<bool> &visited)
{
    path.push_back(s);
    visited[s]=true;
    for(auto x:adj[s])
    {
        if(!visited[x])
        {
            dfs(x,adj,visited);
        }
    }
}

void solveCP311()
{
    cin>>n>>m;
    vector<ll> adj[n+1];
    vector<ll> degree(n+1,0);
    vector<bool> visited(n+1,false);
    for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            path.clear();
            dfs(i,adj,visited);
            ll flag=true;
            for(auto x:path)
            {
                if(degree[x]!=2) { flag=false; break; }
            }
            if(flag) { ans++; }
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