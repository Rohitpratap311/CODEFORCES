
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
void solveCP311()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll freq[n+1]={0};
    for(ll i=0;i<n;i++) 
    {
        cin>>arr[i]; 
        freq[arr[i]]++;
    }
    ll ans=0;
    for(ll i=0;i<n-1;i++)
    {
        ll sum=arr[i];
        for(ll j=i+1;j<n;j++)
        {
            sum+=arr[j];
            if(sum>n) { break; }
            else 
            { 
                ans+=freq[sum]; 
                freq[sum]=0;
            }
        }
    }
    cout<<ans<<'\n';
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