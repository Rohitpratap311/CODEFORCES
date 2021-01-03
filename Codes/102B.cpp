#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll=long long;
using ld=long double;

ll sod(string n)
{
    ll sum=0;
    for(auto i:n)
    {
        sum+=(i-'0');
    }
    return sum;
}

void solveCP311()
{
    string n;
    cin>>n;
    ll ans=0;
    while(n.size()>1)
    {
        n=to_string(sod(n));
        ans++;
    }
    cout<<ans;
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