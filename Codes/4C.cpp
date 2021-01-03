
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    map<string,ll> mp;
    string arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    string ans[n];
    for(ll i=n-1;i>=0;i--)
    {
        ll x=mp[arr[i]];
        x--;
        if(x>=0)
        {
            if(x==0) { ans[i]="OK"; }
            else
            {
                ans[i]=arr[i]+to_string(x);   
            }
        }
        mp[arr[i]]--;
    }
    for(ll i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
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