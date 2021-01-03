
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,m,d,x=0;
    cin>>n>>m>>d;
    ll s=n*m;
    ll arr[s];
    bool flag=true;
    for(ll i=0;i<s;i++)
    {
        cin>>arr[i];
        if(i==0) { x=arr[i]%d; }
        else
        {
            ll temp=arr[i]%d;
            if(temp!=x)
            {
                flag=false;
            }
        }
    }
    if(!flag)
    {
        cout<<"-1";
        return;
    }
    sort(arr,arr+s);
    ll median=arr[(s/2)];
    ll ans=0;
    for(ll i=0;i<s;i++)
    {
        ans+=abs(arr[i]-median);
    }
    cout<<ans/d;

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