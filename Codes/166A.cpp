
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

bool compare(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    return a.first>b.first;
}

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    k--;
    vector<pair<ll,ll>> vec(n);
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end(),compare);
    ll ans=1;
    for(ll i=k+1;i<n;i++)
    {
        if((vec[k].first!=vec[i].first)||(vec[k].second!=vec[i].second))
        {
            break;
        }
        else
        {
            ans++;
        }
    }
    for(ll i=k-1;i>=0;i--)
    {
        if((vec[k].first!=vec[i].first)||(vec[k].second!=vec[i].second))
        {
            break;
        }
        else
        {
            ans++;
        }
    }
    cout<<ans<<endl;
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