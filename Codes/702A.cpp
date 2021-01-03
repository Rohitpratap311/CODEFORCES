#include <iostream>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
    
   ll n,ans=1,max=1;
   cin>>n;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n-1;i++)
   {
       if(arr[i+1]>arr[i])
       {
           ans++;
           if(max<ans)
           {
               max=ans;
               
           }
       }
       else
       {
           ans=1;
       }
   }
   cout<<max;
   
   return 0;
}