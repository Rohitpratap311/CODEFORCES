#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll=long long;
using ld=long double;

void solveCP311()
{
    int n;
    cin>>n;
    int x=(180-n);
    if(360%x==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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