
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll x,y;
    cin>>x>>y;
    ll z=abs(x)+abs(y);
    if(x<0)
    {
        if(y<0)
        {
            cout<<-z<<" 0 0 "<<-z;
        }
        else
        {
            cout<<-z<<" 0 0 "<<z;
        }
    }
    else
    {
        if(y<0)
        {
            cout<<"0 "<<-z<<" "<<z<<" 0";
        }
        else
        {
            cout<<0<<" "<<z<<" "<<z<<" "<<0;
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