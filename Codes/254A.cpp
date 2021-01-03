//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll> adj[5001];
ll arr[5001];

void solveCP311()
{
    ll n;
    cin>>n;
    bool flag=true;
    for(ll i=0;i<(2*n);i++)
    {
        ll temp;
        cin>>temp;
        arr[temp]++;
        adj[temp].push_back(i+1);
    }
    for(ll i=1;i<=5000;i++)
    {
        if(arr[i]%2!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        for(ll i=1;i<=5000;i++)
        {
            if(arr[i]!=0)
            {
                for(ll j=0;j<arr[i];j+=2)
                {
                    cout<<adj[i][j]<<" "<<adj[i][j+1]<<endl;
                }
            }
        }
    }
    else
    {
        cout<<"-1";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t=1;
    //cin>>t;
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}