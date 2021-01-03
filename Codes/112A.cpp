#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
//#Rohitpratap311

int main()
{
   string a,b;
   cin>>a>>b;
   int ans=0;
   transform(a.begin(), a.end(), a.begin() , ::tolower);
   transform(b.begin(), b.end(), b.begin() , ::tolower);
   for(int i=0;i<a.size();i++)
   {
       //cout<<a[i]<<' '<<b[i]<<endl;
       if(a[i]<b[i]) { ans=-1; break; }
       if(a[i]>b[i]) { ans=1; break; }
   }
   cout<<ans;
   return 0;
}