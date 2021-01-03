#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll=long long;
using ld=long double;

void solveCP311()
{
    ll n;
    cin>>n;
    if(n%4==0||n%7==0||n%47==0||n%44==0||n%74==0||n%77==0||n%444==0||n%447==0||n%474==0||n%777==0||n%747==0||n%774==0||n%477==0||n%744==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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