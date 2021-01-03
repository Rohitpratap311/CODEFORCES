#include <bits/stdc++.h>

using namespace std;
//#Rohitpratap311

int main()
{
   int arr[3][3];
   int ans;
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           cin>>arr[i][j];
       }
   }
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           int temp=arr[i][j];
           if(j>0) temp+=arr[i][j-1];
           if(j<2) temp+=arr[i][j+1];
           if(i>0) temp+=arr[i-1][j];
           if(i<2) temp+=arr[i+1][j];
           if(temp%2==0) { ans=1;} else ans=0;
           cout<<ans;
       }
       cout<<endl;
   }
   
   return 0;
}