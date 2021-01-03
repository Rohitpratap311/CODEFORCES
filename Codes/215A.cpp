#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   int n,m,ans=0;
   cin>>n;
   int front[n];
   for(int i=0;i<n;i++) { cin>>front[i]; }
   cin>>m;
   int rear[m];
   for(int i=0;i<m;i++) { cin>>rear[i];  }
   int max=INT_MIN;
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           double temp=(double)rear[i]/(double)front[j];
           if(temp==rear[i]/front[j]) 
           { 
               if(temp==max)
               {
                   ans++;
               }
               if(temp>max)
               {
                   ans=1;
                   max=temp;
               }
               
           }
       }
   }
   cout<<ans;
   return 0;
}