#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
   ll str;
   cin>>str;
   int  lucky=0;
   while(str>0)
   {
       int temp=str%10;
       str=str/10;
       if(temp==4||temp==7)
       {
           lucky++;
       }

   }
   if(lucky==4||lucky==7)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }
   return 0;


}