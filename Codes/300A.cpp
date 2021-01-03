#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"1 "<<arr[0]<<endl;
    if(arr[n-1]!=0)
    {
        cout<<"1 "<<arr[n-1]<<endl;
        cout<<n-2<<" ";
        for(ll i=1;i<n-1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"2 "<<arr[1]<<" "<<arr[2]<<endl;
        cout<<n-3<<" ";
        for(ll i=3;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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