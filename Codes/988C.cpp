#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

bool cmp(string a,string b)
{
	return a.size()<b.size();
}


void solveCP311()
{
    ll k;
    cin>>k;
    vector<pair<ll,pair<ll,ll>>> all;
    for(ll q=0;q<k;q++)
    {
        ll n;
        cin>>n;
        vector<ll> vec(n);
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
            sum+=vec[i];
        }
        for(ll i=0;i<n;i++)
        {
            ll temp=sum-vec[i];
            all.push_back({temp,{q,i}});
        }
    }
    sort(all.begin(),all.end());
    for(ll i=0;i<all.size()-1;i++)
    {
        if(all[i].first==all[i+1].first)
        {
            if(all[i].second.first!=all[i+1].second.first)
            {
                cout<<"YES"<<endl<<all[i].second.first+1<<" "<<all[i].second.second+1<<endl<<all[i+1].second.first+1<<" "<<all[i+1].second.second+1;
                return;
            }
        }
    }
    cout<<"NO";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}