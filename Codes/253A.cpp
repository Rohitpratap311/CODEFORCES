//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,m;
    cin>>n>>m;
    string str="GB";
    if(n>m) { str="BG"; }
    for(ll i=0;i<min(m,n);i++)
    {
        cout<<str;
    }
    if(n>m)
    {
        ll x=n-m;
        while(x--)
        {
            cout<<'B';
        }
    }
    else
    {
        ll x=m-n;
        while(x--)
        {
            cout<<'G';
        }
    }
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    ll t=1;
    //cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}