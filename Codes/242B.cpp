
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
   ll lmin=1e10,rmax=-1;
   for(ll i=0;i<n;i++)
   {
       cin>>arr1[i]>>arr2[i];
       lmin=min(lmin,arr1[i]);
       rmax=max(rmax,arr2[i]);
   }
   ll ans=-1;
   for(ll i=0;i<n;i++)
   {
       if(lmin==arr1[i]&&rmax==arr2[i])
       {
           ans=i+1;
           break;
       }
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