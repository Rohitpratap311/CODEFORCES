#include<bits/stdc++.h>
using namespace std;
//#Rohitpratap311
int main()
{
     int n,ans=0;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++) { cin>>arr[i]; }
     int max=arr[0],min=arr[0];
     //cout<<max<<' '<<min<<endl;
     for(int i=1;i<n;i++)
     {
        if(arr[i]>max) { ans++; max=arr[i]; }
        if(arr[i]<min) { ans++; min=arr[i]; }
     }
     cout<<ans;
}