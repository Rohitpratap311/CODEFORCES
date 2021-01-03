#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
//#Rohitpratap311

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,q,temp;
   cin>>n;
   int arr[n],arr2[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       arr2[arr[i]]=i;
   }
   cin>>q;
   ll a=0,b=0;
   for(int i=0;i<q;i++)
   {
       cin>>temp;
       int x=arr2[temp]+1;
       int y=n-arr2[temp];
       a+=x;
       b+=y;
   }

   cout<<a<<' '<<b;
   return 0;
}