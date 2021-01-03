#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void addEdge(vector<ll>adj[],ll u,ll v)
{
    adj[u].push_back(v);
}

void dfsH(vector<ll>adj[],ll s,bool visited[],ll count[])
{
    visited[s]=true;
    for(int i:adj[s])
    {
        if(visited[i]==false)
        {
            dfsH(adj,i,visited,count);
        }
        count[s]=max(count[s],count[i]);
    }
    count[s]++;

}

void DFS(vector<ll>adj[],ll n)
{
    bool visited[n+1];
    for(ll i=0;i<=n;i++) { visited[i]=false; }
    ll count[n+1]={0};
    for(ll i=1;i<=n;i++)
    {
        if(visited[i]==false)
        {
            dfsH(adj,i,visited,count);
        }
    }
    sort(count,count+n+1);
    cout<<count[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> adj[n+1];
        for(ll i=1;i<=n;i++)
        {
            ll temp;
            cin>>temp;
            if(temp!=-1)
            {
                addEdge(adj,temp,i);
            }
        }
        DFS(adj,n);

    }
    return 0;
}