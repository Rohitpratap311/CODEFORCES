#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   int k,sum=0,ans=0;
   cin>>k;
   int arr[12];
   for(int i=0;i<12;i++) { cin>>arr[i]; sum+=arr[i]; }
   if(sum<k) { cout<<"-1"; }
   else
   {

       sort(arr,arr+12);
       int i=11;
       while(k>0)
       {
           k=k-arr[i];
           ans++;
           i--;
       }
       cout<<ans;
   }

   return 0;
}