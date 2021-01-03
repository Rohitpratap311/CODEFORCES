#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#Rohitpratap311
int main()
{
     string str;
     cin>>str;
     string ans="NO";
     for(int i=0;i<str.size();i++)
     {
         if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
         {
             ans="YES";
             break;
         }
     }
     cout<<ans;
     return 0;
}