#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#Rohitpratap311
int main()
{
     string one,two,pile;
     cin>>one>>two>>pile;
     int x=one.size(); int y=two.size(); int z=pile.size();
     int arr1[26]={0},arr2[26]={0};
     for(int i=0;i<x;i++) { arr1[(int)one[i]-65]++; }
     for(int i=0;i<y;i++) { arr1[(int)two[i]-65]++; }
     for(int i=0;i<z;i++) { arr2[(int)pile[i]-65]++; }
    
     string ans="YES";
     for(int i=0;i<26;i++)
     {
         if(arr1[i]!=arr2[i]) { ans="NO"; break; }
     }
     cout<<ans;
     
     return 0;
}