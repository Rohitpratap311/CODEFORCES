#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
   //ios_base::sync_with_stdio(false);
   //cin.tie(NULL);
   int n,a,b,count=0;
   cin>>n>>a>>b;
   for(int i=1;i<=n;i++)
   {
       if((i-1>=a)&&(n-i<=b)) { count++; }
   }
   cout<<count;
   return 0;
}