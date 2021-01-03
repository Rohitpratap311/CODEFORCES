#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   int n,m,ans=0;
   cin>>n>>m;
   int arr[n];
   for(int i=0;i<=sqrt(1000);i++)
   {
       for(int j=0;j<=sqrt(1000);j++)
       {
           if(((i*i)+j)==n && (i+(j*j))==m)
           {
               ans++;
           }
       }
   }
   cout<<ans;
   return 0;
}