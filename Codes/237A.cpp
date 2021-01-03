
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
    ll arr[n],arr2[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr2[i]>>arr[i];
    }
    ll ans=1;
    for(ll i=0;i<n-1;i++)
    {
        ll temp=1;
        while(arr[i+1]==arr[i]&&arr2[i+1]==arr2[i]&&i+1<n)
        {
            temp++;
            i++;
        }
        ans=max(ans,temp);
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