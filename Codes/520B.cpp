
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll buttons(ll a,ll b)
{
    if(a>=b)
    {
        return a-b;
    }
    else
    {
        if(b%2==0)
        {
            return 1+buttons(a,b/2);
        }
        else
        {
            return 2+buttons(a,(b+1)/2);
        }
    }
}

void solveCP311()
{
    ll a,b;
    cin>>a>>b;
    cout<<buttons(a,b);
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