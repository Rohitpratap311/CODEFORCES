//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    ll sum[n];
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        if(i==0)
        {
            sum[i]=temp;
        }
        else
        {
            sum[i]=sum[i-1]+temp;
        }
    }
    ll val=1e18;
    ll ans;
    for(ll i=n-1;i>=0;i--)
    {
        ll temp;
        if(i-k==-1)
        {
            temp=sum[i];
            if(temp<val)
            {
                val=temp;
                ans=1;
            }
            break;
        }
        temp=sum[i]-sum[i-k];
        if(temp<val)
        {
            val=temp;
            ans=i-(k-1)+1;
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