
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    ll arr[26]={0};
    for(ll i=0;i<n;i++)
    {
        arr[str[i]-'A']++;
    }
    sort(arr,arr+26);
    ll ans=0;
    for(ll i=25;i>=0;i--)
    {
        ans=ans+(pow(min(k,arr[i]),2));
        k-=arr[i];
        if(k<=0) { break; }
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