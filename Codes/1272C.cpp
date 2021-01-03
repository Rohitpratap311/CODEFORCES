
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll arr[26]={0};
    for(ll i=0;i<k;i++)
    {
        char temp;
        cin>>temp;
        arr[temp-'a']=1;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll count=0;
        while(arr[s[i]-'a']==1 && i<n)
        {
            count++;
            i++;
        }
        ans+=((count)*(count+1))/2;
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