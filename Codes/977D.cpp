
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> vec(n);
    for(ll i=0;i<n;i++)
    {
        cin>>vec[i].second;
        ll x=0;
        ll temp=vec[i].second;
        while(temp%3==0)
        {
            temp/=3;
            x++;
        }
        vec[i].first=-x;
    }
    sort(vec.begin(),vec.end());
    for(ll i=0;i<n;i++)
    {
        cout<<vec[i].second<<" ";
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