#include <bits/stdc++.h>

using namespace std;
//#Rohitpratap311

int main()
{
   string str;
   cin>>str;
   int lower=0,upper=0;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]>='a'&&str[i]<='z') lower++;
       else upper++;
   }
   if(upper<=lower)
   {
       transform(str.begin(), str.end(), str.begin(), ::tolower);
   }
   else
   {
       transform(str.begin(), str.end(), str.begin(), ::toupper); 
   }
   cout<<str;
   
}