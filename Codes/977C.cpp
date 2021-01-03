
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans;
    sort(arr,arr+n);
    if(k==0)
    {
            ans=arr[0]-1;
    }
    else
    {
        ans=arr[k-1];
    }
        ll c=0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]<=ans)
            {
                c++;
            }
        }
        if(c!=k||!(1<=ans&&ans<=1e9))
        {
            cout<<-1;
        }
        else
        {
            cout<<ans;
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