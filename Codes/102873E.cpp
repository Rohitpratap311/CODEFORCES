
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
    string s,t;
    cin>>n>>s>>t;
    ll ans=0;
    ll l=0;
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]==t[0]&&s[i+1]==t[1])
        {
            ans=ans+(i-l+1)*(n-i-1);
            l=i+1;
        }
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