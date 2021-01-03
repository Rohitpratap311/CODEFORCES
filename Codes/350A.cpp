
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,m;
    cin>>n>>m;
    ll arr1[n],arr2[m];
    for(ll i=0;i<n;i++) { cin>>arr1[i]; }
    for(ll i=0;i<m;i++) { cin>>arr2[i]; }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    ll ans=max(2*arr1[0],arr1[n-1]);
    if(ans>=arr2[0])
    {
        ans=-1;
    }
    cout<<ans;
    
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