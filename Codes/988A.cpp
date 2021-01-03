#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void solveCP311()
{
    ll n,k;
    cin>>n>>k;
    map<ll,ll> vec;
    set<ll> s;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        vec[temp]=i+1;
        s.insert(temp);
    }
    if(s.size()<k)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        ll x=0;
        for(auto i:s)
        {
            cout<<vec[i]<<" ";
            x++;
            if(x==k)
            {
                
                break;
            }
        }
        
    }
    
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