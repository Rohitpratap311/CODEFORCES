#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   int k;
   string str,ans;
   cin>>k>>str;
   int arr[26]={0};
   int n=str.size();
   for(int i=0;i<n;i++)
   {
       arr[(int)str[i]-97]++;
   }
   for(int i=0;i<26;i++)
   {

       if(arr[i]>0)
       {
           if((arr[i]<k)||arr[i]%k!=0)
           {
                cout<<"-1";
                return 0;
           }
       }
   }
   for(int i=0;i<26;i++)
   {
       if(arr[i]>0)
       {
           int check=arr[i]/k;
           while(check--)
           {
               ans=ans+(char)(i+97);
           }
       }
   }
   while(k--) { cout<<ans; }
   return 0;
}