
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    ll f,t;
    ll ans=-INT_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>f>>t;
        ll temp;
        if(t<=k)
        {
            temp=f;
        }
        else
        {
            temp=f-(t-k);
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