#include<bits/stdc++.h>

using namespace std;
//#Rohitpratap311

int main()
{
   int n,m,temp,max=0,premax=0;
   cin>>n>>m;
   int ans=n;
   for(int i=0;i<n;i++)
   {
       cin>>temp;
       if(temp>m)
       {
           if((temp%m)==0) { max=temp/m; } else { max=(temp/m)+1; }
           if(max>=premax)
           {
               premax=max;
               ans=i+1;
           }
       }
   }
   cout<<ans;
   return 0;
}