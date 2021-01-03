#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
   ll n,count=0;
   string str;
   cin>>n>>str;
   for(int i=0;i<n-1;i++)
   {
       if(str[i]==str[i+1])
       {
           count++;
           
       }
       
   }
   cout<<count;
   return 0;
   
   
}