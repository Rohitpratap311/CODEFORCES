
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr1[n],arr2[n];
    ll sum1[n]={0};
    ll sum2[n]={0};
    for(ll i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr2[i]=arr1[i];
        if(i==0)
        {
            sum1[i]=arr1[i];
        }
        else
        {
            sum1[i]=sum1[i-1]+arr1[i];
        }
    }
    sort(arr2,arr2+n);
    sum2[0]=arr2[0];
    for(ll i=1;i<n;i++)
    {
        sum2[i]=sum2[i-1]+arr2[i];
    }
    ll m;
    cin>>m;
    while(m--)
    {
        ll a,b,x;
        cin>>x>>a>>b;
        if(x==1)
        {
            if(a-1==0)
            {
                cout<<sum1[b-1]<<endl;
            }
            else
            {
                cout<<sum1[b-1]-sum1[a-2]<<endl;
            }
        }
        else
        {
            if(a-1==0)
            {
                cout<<sum2[b-1]<<endl;
            }
            else
            {
                cout<<sum2[b-1]-sum2[a-2]<<endl;
            }
        }
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