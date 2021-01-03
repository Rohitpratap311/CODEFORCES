#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   ll n,m;
   cin>>n>>m;
   ll arr[m];
   for(ll i=0;i<m;i++) { cin>>arr[i]; }
   ll ans=arr[0]-1;
   for(ll i=1;i<m;i++)
   {
       //cout<<ans<<endl;
       ll temp=arr[i];
       if(temp>=arr[i-1])
       {
           ans+=temp-arr[i-1];
       }
       else
       {
           ans+=(n-arr[i-1])+temp;
       }
   }
   cout<<ans;
   return 0;
}