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
   //cout<<str<<endl;
   string wub="WUB";
   while((str.substr(0,3)==wub)&&(n>=3))
   {
       str.erase(0,3);
      // cout<<str<<endl;
       n=str.size();
   }
   if(n>=3)
   {
   while((str.substr(n-3,n)==wub)&&(n>=3))
   {
       str.erase(n-3,n);
       //cout<<str<<endl;
       n=str.size();
       if(n<3) { break; }
   }
   }
   //cout<<str<<endl;
   for(int i=0;i<n;i++)
   {
       int space=0;
       if(i<n-3)
       {
           while(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
           {
               space++;
               i=i+3;
           }
       }
       if(space!=0) { cout<<' '; }
       cout<<str[i];
   }
   return 0;
}