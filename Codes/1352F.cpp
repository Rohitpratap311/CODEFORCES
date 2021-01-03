
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
void solveCP311()
{
    ll n0,n1,n2;
    cin>>n0>>n1>>n2;
    if(n1==0)
    {
        if(n0>0&&n2>0)
        {
            cout<<-1;
        }
        else if(n0>0)
        {
            ll x=n0+1;
            while(x--)
            {
                cout<<0;
            }
            cout<<endl;
        }
        else
        {
            ll x=n2+1;
            while(x--)
            {
                cout<<1;
            }
            cout<<endl;
        }
    }
    else
    {
        string ans="";
		for (int i = 0; i < n1 + 1; ++i) 
		{
			if (i & 1) ans += "0";
			else ans += "1";
		}
		ans.insert(1, string(n0, '0'));
		ans.insert(0, string(n2, '1'));
		cout<<ans<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}