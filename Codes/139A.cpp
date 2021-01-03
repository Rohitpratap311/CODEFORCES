#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
//#Rohitpratap311

struct point
{
    int x,y;
};

int main()
{
   int n,ans=0,sum=0,min=INT_MAX;
   cin>>n;
   int arr[7];
   for(int i=0;i<7;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
       if(arr[i]<min)
       {
           min=arr[i];
       }
   }
   while(n-sum>sum)
   {
       n-=sum;
   }
   while(ans==0)
   {
   for(int i=0;i<7;i++)
   {
       if((n-arr[i])<=0)
       {
           ans=i+1;
           break;
       }
       n-=arr[i];
   }
   }
   cout<<ans;
   return 0;
}