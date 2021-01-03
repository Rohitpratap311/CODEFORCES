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
        ll n,qx,qy,kx,ky,fx,fy;
        cin>>n>>qx>>qy>>kx>>ky>>fx>>fy;
        {
            if(kx<qx)
            {
                if(ky<qy)
                {
                    if(fx>=qx||fy>=qy)
                    {
                        cout<<"NO"; return 0;
                    }
                }
                else
                {
                    if(fx>=qx||fy<=qy)
                    {
                        cout<<"NO"; return 0;
                    }
                }
            }
            else if(kx>qx)
            {
                if(ky<qy)
                {
                    if(fx<=qx||fy>=qy)
                    {
                        cout<<"NO"; return 0;
                    }
                }
                else
                {
                    if(fx<=qx||fy<=qy)
                    {
                        cout<<"NO"; return 0;
                    }
                }
            }
            cout<<"YES";
        }
    }
    return 0;
}