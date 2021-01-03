
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll a[n],g[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]>>g[i];
    }
    ll diff=0;
    string ans="";
    bool flag=true;
    ll A=0,B=0;
    for(ll i=0;i<n;i++)
    {
        if(abs(A+a[i]-B)<=500)
        {
            A=a[i]+A;
            ans+='A';
        }
        else if(abs(g[i]+B-A)<=500)
        {
            B=B+g[i];
            ans+='G';
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<ans;
    }
    else
    {
        cout<<"-1";
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