
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    ll a,s;
    cin>>a>>s;
    ll b=s-a;
    vector<ll> a1;
    vector<ll> b1;
    ll x=a;
    while(x)
    {
        a1.push_back(x%10);
        x=x/10;
    }
    x=b;
    while(x)
    {
        b1.push_back(x%10);
        x=x/10;
    }
    sort(a1.begin(),a1.end());
    sort(b1.begin(),b1.end());
    string ans="YES";
    if(a1.size()!=b1.size())
    {
        ans="NO";
    }
    else
    {
        for(ll i=0;i<a1.size();i++)
        {
            if(a1[i]!=b1[i])
            {
                ans="NO";
                break;
            }
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