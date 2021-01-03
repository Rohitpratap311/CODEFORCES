#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   int n;
   cin>>n;
   string str1,str2;
   cin>>str1;
   int a=1,b=0;
   if(n==1)
   {
       cout<<str1;
   }
   else
   {
       for(int i=1;i<n;i++)
       {
           string temp;
           cin>>temp;
           if(temp==str1) { a++; }
           else { b++; str2=temp; }
       }
       if(a>b) { cout<<str1; }
       else { cout<<str2; }
   }
   return 0;
}