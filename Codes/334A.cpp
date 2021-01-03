
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n*n];
    arr[0]=1;arr[1]=n*n;
    for(ll i=2,j=3;i<n*n&&j<n*n;i+=2,j+=2)
    {
        arr[i]=arr[i-2]+1;
        arr[j]=arr[j-2]-1;
    }
    ll x=0;
    for(ll i=0;i<n*n;i++)
    {
        cout<<arr[i]<<" ";
        x++;
        if(x==n) { cout<<endl; x=0; }
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