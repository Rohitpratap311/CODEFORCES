
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<ll,ll> dp;
    ll res=-1;
    ll key=0;
    for(ll i=0;i<n;i++)
    {
        ll temp=arr[i];
        dp[temp]=dp[temp-1]+1;
        if(res<dp[temp])
        {
            res=dp[temp];
            key=temp;
        }
    }
    vector<ll> ans;
    for(ll i=n-1;i>=0;i--)
    {
        if(arr[i]==key)
        {
            ans.push_back(i+1);
            key--;
        }
    }
    cout<<res<<endl;
    for(ll i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
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