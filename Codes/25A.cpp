
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
    ll even=0,odd=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0) { even++; } else { odd++; }
    }
    
    if(odd>1)
    {
        for(ll i=0;i<n;i++)
        {
            if(arr[i]%2==0) { cout<<i+1; }
        }
    }
    else
    {
        for(ll i=0;i<n;i++)
        {
            if(arr[i]%2!=0) { cout<<i+1; }
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