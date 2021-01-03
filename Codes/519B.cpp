
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solveCP311()
{
    ll n;
    cin>>n;
    ll a[n],b[n-1],c[n-2];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    for(ll i=0;i<n-2;i++)
    {
        cin>>c[i];
    }
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    for(ll i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<a[n-1]<<endl;
        }
        else
        {
            if(a[i]!=b[i])
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
    for(ll i=0;i<n-1;i++)
    {
        if(i==n-2)
        {
            cout<<b[n-2]<<endl;
        }
        else
        {
            if(b[i]!=c[i])
            {
                cout<<b[i]<<endl;
                break;
            }
        }
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