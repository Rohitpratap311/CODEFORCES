#include <iostream>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
   string str;
   cin>>str;
   int n=str.size();
   int count=0;
   for(int i=0;i<n-2;i++)
   {
       if(str[i]=='Q')
       {
           for(int j=i+1;j<n-1;j++)
           {
               if(str[j]=='A')
               {
                   for(int k=j+1;k<n;k++)
                   {
                       if(str[k]=='Q')
                       {
                           count++;
                       }
                   }
               }
           }
       }
   }
   cout<<count;
   return 0;
}