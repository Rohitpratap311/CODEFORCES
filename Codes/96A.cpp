#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   string str;
   cin>>str;
   int n=str.size();
   for(int i=0;i<=n-7;i++)
   {
       int ans=1;
       for(int j=i+1;j<n;j++)
       {
           if(str[i]==str[j])
           {
               ans++;
               if(ans==7) { cout<<"YES"; return 0; }
           }
           else
           {
               i=j-1;
               break;
           }
       }
   }
   cout<<"NO";
   return 0;
}