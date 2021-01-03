
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<ll>dp(n+1,-1e9);
    dp[0]=0;
    for(ll i=1;i<=n;i++)
    {
        if(i-a>=0&&dp[i-a]>=dp[i])
        {
            dp[i]=dp[i-a]+1;
        }
        if(i-b>=0&&dp[i-b]>=dp[i])
        {
            dp[i]=dp[i-b]+1;
        }
        if(i-c>=0&&dp[i-c]>=dp[i])
        {
            dp[i]=dp[i-c]+1;
        }
    }
    cout<<dp[n];
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