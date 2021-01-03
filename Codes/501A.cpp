#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void solveCP311()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x=max((3*a)/10,a-((a*c)/250));
    ll y=max((3*b)/10,b-((b*d)/250));
    if(x>y)
    {
        cout<<"Misha";
    }
    else if(y>x)
    {
        cout<<"Vasya";
    }
    else
    {
        cout<<"Tie";
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
    return 0;
}