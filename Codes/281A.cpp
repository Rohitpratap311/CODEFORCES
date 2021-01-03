#include <bits/stdc++.h>

using namespace std;
//#Rohitpratap311

int main()
{
   string str;
   cin>>str;
   if(str[0]>='A'&&str[0]<='Z')
   {
       cout<<str;
   }
   else
   {
       str[0]=toupper(str[0]);
       cout<<str;
   }
   return 0;
   
   
}