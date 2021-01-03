
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[1001]={0};
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        arr[temp]++;
    }
    bool flag=true;
    ll x=0;
    if(n%2==0)
    {
        x=n/2;
    }
    else
    {
        x=(n+1)/2;
    }
    for(ll i=1;i<1001;i++)
    {
        if(arr[i]>x)
        {
            flag=false;
            break;
        }
    }
    if(flag) { cout<<"YES"; } else { cout<<"NO"; }
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