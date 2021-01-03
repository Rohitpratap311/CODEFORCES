
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll preva=0,prevb=0;
    ll a=0,b=0;
    bool x=true,y=true;
    for(ll i=0,j=n-1;i<=j;)
    {
        if(arr[i]>=preva&&x)
        {
            a+=arr[i];
            preva=arr[i];
            i++;
        }
        else { x=false; i++; }
        if(arr[j]>=prevb&&y)
        {
            b+=arr[j];
            prevb=arr[j];
            j--;
        }
        else {  y=false; j--; }
        //cout<<a<<" "<<b<<endl;
        if(!x&&!y)
        {
            break;
        }
    }
    ll ans=1;
    ll i;
    for(i=0;i+1<n;i++)
    {
        if(arr[i+1]<arr[i])
        {
            break;
        }
        ans++;
    }
    if(i<n-1) { ans++; }
    ll j;
    for(j=n-1;j-1>i;j--)
    {
        if(arr[j-1]<arr[j])
        {
            break;
        }
        ans++;
    }
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}