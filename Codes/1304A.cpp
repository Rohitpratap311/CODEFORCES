#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

bool cmp(string a,string b)
{
	return a.size()<b.size();
}

void solveCP311()
{
    ld x,y,a,b;
    cin>>x>>y>>a>>b;
    ld t=(y-x)/(a+b);
    ll t1=(ll)t;
    if(t==(ld)t1)
    {
        cout<<t1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}