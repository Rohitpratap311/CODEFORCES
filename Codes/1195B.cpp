
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> sum(n);
    for(ll i=0;i<n;i++)
    {
        if(i==0) { sum[i]=i+1; }
        else { sum[i]=sum[i-1]+i+1; }
        //cout<<sum[i]<<endl;
    }
    ll l=-1,r=n,mid;
    while(r>l+1)
    {
        mid=(l+r)/2;
        if(sum[mid]<k)
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
        
    }
    ll ans=0;
    ans=sum[r]-k; 
    ll counter=r+ans+1;
    ll left=n-counter;
    ans+=(left+1)/2;
    cout<<ans<<endl;
    
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