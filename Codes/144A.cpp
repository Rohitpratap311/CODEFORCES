#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    int arr[n],arr2[n];
    int p,q;
    for(int i=0;i<n;i++) { cin>>arr[i]; arr2[i]=arr[i];}
    sort(arr2,arr2+n);
    int left=0,right=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr2[n-1]) { left=i+1;  p=i; break;}
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr2[0]) { right=n-1-i;  q=i; }
    }
    int ans=left+right;
    if(p<q) cout<<ans-1;
    else cout<<ans-2;
    return 0;
}