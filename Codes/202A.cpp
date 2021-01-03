#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
//#Rohitpratap311
//Keep_Calm_And_Stay_Happy

int main()
{
   string str;
   cin>>str;
   sort(str.begin(),str.end());
   //cout<<str<<endl;
   string ans;
   ans+=str[str.length()-1];
   for(ll i=str.length()-1;i>=0;i--)
   {
       if(str[i-1]==str[i])
       {
           ans+=str[i];
       }
       else { break; }
   }
   cout<<ans;
   return 0;
}