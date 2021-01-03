#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
   string n,m,ans;
   cin>>n>>m;
   for(int i=0;i<n.size();i++)
   {
       if(n[i]==m[i]) ans+='0';
       else ans+='1';
   }
   cout<<ans;
   
}