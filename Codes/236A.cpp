#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#Rohitpratap311
int main()
{
     string str;
     cin>>str;
     int sum=0;
     int arr[26]={0};
     for(int i=0;i<str.size();i++)
     {
         arr[(int)str[i]-97]++;
     }
     for(int i=0;i<26;i++)
     {
         if(arr[i]>0) sum++;
     }
     if(sum%2==0) cout<<"CHAT WITH HER!";
     else cout<<"IGNORE HIM!";


     return 0;
}