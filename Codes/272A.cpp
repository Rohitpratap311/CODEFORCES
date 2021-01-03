#include<bits/stdc++.h>

using namespace std;
//#Rohitpratap311

int main()
{
   int n,temp,sum=0,ans=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>temp;
       sum+=temp;
   }
   for(int i=1;i<=5;i++)
   {
       sum++;
       if(sum%(n+1)!=1)
       {
           ans++;
       }

   }
   cout<<ans;
   return 0;
}