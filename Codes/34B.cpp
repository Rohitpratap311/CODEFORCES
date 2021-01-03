#include <bits/stdc++.h>
//#Rohitpratap311

using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
   int n,m,ans=0;
   cin>>n>>m;
   int arr[n];
   for(int i=0;i<n;i++) { cin>>arr[i]; }
   sort(arr,arr+n);
   for(int i=0;i<m;i++) { if(arr[i]>0) { break; } ans=ans+abs(arr[i]); }
   cout<<ans;
   return 0;
}