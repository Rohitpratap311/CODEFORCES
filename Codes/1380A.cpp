
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
    for(ll j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    bool a=0,b=0;
    ll x,y,z;
    for(ll i=1;i<n-1;i++)
    {
        x=i;
        for(ll j=i-1;j>=0;j--)
        {
            if(arr[j]<arr[i])
            {
                y=j;
                a=1;
                break;
            }
        }
        for(ll j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                z=j;
                b=1;
                break;
            }
        }
        if(a&&b)
        {
            break;
        }
        else
        {
            a=0,b=0;
        }
        
    }
    if(a&&b) 
    {
        cout<<"YES"<<endl<<y+1<<" "<<x+1<<" "<<z+1<<endl;
    }
    else
    {
        cout<<"NO"<<endl;;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}