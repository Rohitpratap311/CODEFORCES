#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void solveCP311()
{
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<max(abs(x2-x1),abs(y2-y1));
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}