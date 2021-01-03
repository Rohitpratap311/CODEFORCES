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
   int n,ans=0;
   cin>>n;
   struct point arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i].x>>arr[i].y;
   }
   for(int i=0;i<n;i++)
   {
       int l=0,r=0,u=0,d=0;
       int cx=arr[i].x;
       int cy=arr[i].y;
       for(int j=0;j<n;j++)
       {
           if(arr[j].y==cy)
           {
               if(arr[j].x>cx) { r++; }
               if(arr[j].x<cx) { l++; }
           }
           else if(arr[j].x==cx)
           {
               if(arr[j].y>cy)  { u++; }
               if(arr[j].y<cy)  { d++; }
           }

       }
       if(l>0&&r>0&&u>0&&d>0)
       {
           ans++;
       }
   }
   cout<<ans;
   return 0;
}