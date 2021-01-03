#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   string str,ans;
   cin>>str;
   int n=str.size();
   transform(str.begin(),str.end(),str.begin(),:: tolower);
   for(int i=0;i<n;i++)
   {
       if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'))
       {
           ans=ans+'.'+str[i];
       }
   }
   cout<<ans;
   return 0;
}