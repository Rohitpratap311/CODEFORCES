
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll a,b,n;
    cin>>a>>b>>n;
    bool flag=false;
    for(ll i=0;i<=9;i++)
    {
        ll temp=(a*10)+i;
        if(temp%b==0)
        {
            flag=true;
            cout<<temp;
            break;
        }
    }
    if(flag)
    {
        for(ll i=0;i<n-1;i++)
        {
            cout<<0;
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