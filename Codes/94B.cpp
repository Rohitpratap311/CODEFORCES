#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    ll g[10][10];
    memset(g,0,sizeof(g));
    while(n--)
    {
        ll u,v;
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            for(int k=1;k<=5;k++)
            {
                if(i!=j&&i!=k&&j!=k)
                {
                if(g[i][j]&&g[i][k]&&g[j][k]||!g[i][j]&&!g[i][k]&&!g[j][k])
                {
                    cout<<"WIN"; return 0;
                }
                }
            }
        }
    }
    cout<<"FAIL";
    return 0;
}