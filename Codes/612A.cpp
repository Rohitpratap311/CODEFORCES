#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void solveCP311()
{
    ll n,p,q;
    string s;
    cin>>n>>p>>q>>s;
    bool flag=false;
    ll x;
    for(ll i=0;i<=n/p;i++)
    {
        ll temp=n-(i*p);
        if(temp>=0&&temp%q==0)
        {
            x=i;
            flag=true;
            break;
        }
    }
    if(flag)
    {
        ll a=x;
        ll b=(n-(p*x))/q;
        cout<<a+b<<endl;
        ll y=0;
        for(ll i=0;i<p*x;i++)
        {
            cout<<s[i];
            y++;
            if(y==p)
            {
                y=0;
                cout<<endl;
            }
        }
        y=0;
        for(ll i=p*x;i<n;i++)
        {
            cout<<s[i];
            y++;
            if(y==q)
            {
                y=0;
                cout<<endl;
            }
        }
    }
    else
    {
        cout<<"-1";
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}