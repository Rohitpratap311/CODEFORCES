#include<bits/stdc++.h>
using namespace std;
//#Rohitpratap311
int main()
{
     string str;
     cin>>str;
     int n=str.size();
     int x=(n+1)/2;
     char arr[x];
     int j=0;
     for(int i=0;i<str.size();i=i+2)
     {
         arr[j]=str[i]; j++;
     }
     sort(arr,arr+x);
     for(int i=0;i<x;i++)
     {
         cout<<arr[i];
         if(i!=((n+1)/2)-1) cout<<'+';
     }
     
     return 0;
}