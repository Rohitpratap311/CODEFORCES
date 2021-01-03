#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

struct st
{
    ll t,l,r;
};

void solveCP311()
{
    ll n,m;
    cin>>n>>m;
    st cus[n];
    for(ll i=0;i<n;i++)
    {
        cin>>cus[i].t>>cus[i].l>>cus[i].r;
    }
    ll minl=m,maxl=m;
    ll val=0;
    bool f=1;
    for(ll i=0;i<n;i++)
    {
        minl=minl-cus[i].t+val;
        maxl=maxl+cus[i].t-val;
        val=cus[i].t;
        if(cus[i].r<minl||cus[i].l>maxl)
        {
            f=0;
            break;
        }
        maxl=min(maxl,cus[i].r);
        minl=max(minl,cus[i].l);
    }
    if(f)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}