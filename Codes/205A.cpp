#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll min=INT_MAX,x;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<min)
        {
            min=arr[i];
            x=i+1;
        }
    }
    sort(arr,arr+n);
    if(arr[0]==arr[1])
    {
        cout<<"Still Rozdil";
    }
    else
    {
        cout<<x;
    }
    return 0;
}