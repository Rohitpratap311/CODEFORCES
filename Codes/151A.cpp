#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#Rohitpratap311
int main()
{
     ll  n, k, l, c, d, p, nl, np;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     ll x=(k*l)/nl;
     ll y=c*d;
     ll z=p/np;
     ll ans=min(x,y);
     cout<<min(ans,z)/n;
     return 0;
}