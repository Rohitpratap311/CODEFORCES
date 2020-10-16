
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
//#Rohitpratap311
//Keep_Calm_And_Stay_Happy

int main()
{
   ll n,k;
   cin>>n>>k;
   ll x=240-k;
   ll i=0;
   for(i=1;i<=n;i++)
   {
       if(x-(i*5)<0)
       {
           cout<<i-1;
           return 0;
       }
       x=x-(i*5);
   }
   cout<<n;

   return 0;
}
