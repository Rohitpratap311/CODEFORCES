#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
//#Rohitpratap311

int main()
{
   int n,x,y,z,ans=0;;
   cin>>n;
   while(n--)
   {
       cin>>x>>y>>z;
       if(x+y+z>=2) { ans++; }
   }
   cout<<ans;
   return 0;
}