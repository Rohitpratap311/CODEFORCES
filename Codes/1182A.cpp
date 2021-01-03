
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
    ll dp[n+1]={0};
    dp[0]=0;
    dp[1]=0;
    dp[2]=2;
    for(ll i=3;i<=n;i++)
    {
        if(i%2==0)
        {
            dp[i]=dp[i-2]*2;
        }
        else
        {
            dp[i]=0;
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