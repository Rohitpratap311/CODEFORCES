
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll count1[n]={0},count0[n]={0};
    ll one=0,zero=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1) { one++; }
        else { zero++; }
        count1[i]=one;
        count0[i]=zero;
    }
    ll ans=one;
    ll dp[n][n];
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
        {
            if(i==j)
            {
                if(arr[i]==0) { dp[i][j]=one+1;}
                else { dp[i][j]=one-1; }
            }
            else if(i==0)
            {
                dp[i][j]=one+count0[j]-count1[j];
            }
            else
            {
                dp[i][j]=one+(count0[j]-count0[i-1])-(count1[j]-count1[i-1]);
            }
            ans=max(dp[i][j],ans);
        }
    }
    if(n==one)
    {
        cout<<n-1;
    }
    else
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