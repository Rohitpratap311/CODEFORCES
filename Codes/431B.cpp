#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp> 
//using namespace boost::multiprecision; 

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n=5;
        ll g[n][n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>g[i][j];
            }
        }
        ll p[n]={0,1,2,3,4};
        ll tmp;
        ll ans=-1;
        do
        {
             tmp = g[p[0]][p[1]] + g[p[1]][p[0]];
             tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        
            tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
            tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        
        
            tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        
            tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
            ans=max(ans,tmp);
        
        }
        while(next_permutation(p,p+n));
        cout<<ans;
    }
    return 0;
}