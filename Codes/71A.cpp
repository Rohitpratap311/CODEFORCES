#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#Rohitpratap311
int main()
{
     int n;
     cin>>n;
     while(n--)
     {
         
         string str;
         cin>>str;
         int size=str.size();
         if(size>10)
         {
            cout<<str[0]<<size-2<<str[size-1]<<endl;
         }
         else cout<<str<<endl;
     }
     return 0;
}