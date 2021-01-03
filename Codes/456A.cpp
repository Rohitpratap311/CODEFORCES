
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> vec;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end());
    string ans="Poor Alex";
    for(ll i=1;i<n;i++)
    {
        if(vec[i].second<vec[i-1].second)
        {
            ans="Happy Alex";
            break;
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