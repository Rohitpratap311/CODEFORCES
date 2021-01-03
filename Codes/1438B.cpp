
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
   unordered_map<ll,ll> mp;
   for(ll i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   bool flag=false;
   for(ll i=0;i<n;i++)
   {
        if(mp.find(arr[i])==mp.end())
            mp[arr[i]]=1;
        else
        {
            mp[arr[i]]++;
            flag=true;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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