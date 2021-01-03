#include<bits/stdc++.h>
using namespace std;
//#Rohitpratap311
int main()
{
     int n,pas=0,max=0;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int x,y;
         cin>>x>>y;
         pas=pas-x+y;
         if(max<pas) { max=pas; }
     }
     cout<<max;
     return 0;
}