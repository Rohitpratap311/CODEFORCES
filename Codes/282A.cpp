#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
//#Rohitpratap311

int main()
{
   int n,ans=0;;
   cin>>n;
   while(n--)
   {
       string s;
       cin>>s;
       if(s[1]=='+') ans++;
       else ans--;
   }
   cout<<ans;
   return 0;
}