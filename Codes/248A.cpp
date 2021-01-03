#include<bits/stdc++.h>
using namespace std;
//#Rohitpratap311
int main()
{
     int n,l0=0,l1=0,r0=0,r1=0;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int x,y;
         cin>>x>>y;
         if(x==0)  {l0++;} 
            else l1++;
         if(y==0)  {r0++;} 
            else r1++;
     }
     //cout<<min(l0,l1)<<' '<<min(r0,r1)<<endl;
     cout<<min(l0,l1)+min(r0,r1);
     return 0;
}