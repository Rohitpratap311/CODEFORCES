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
        ll n,m;
        cin>>n>>m;
        char arr[n][m],arr2[n][m];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        char ans='B';
        char temp;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(j==0) { temp=ans; }
                if(arr[i][j]=='-') { arr2[i][j]='-'; }
                else
                {
                    arr2[i][j]=ans;
                }
                if(ans=='W') {ans='B';} else { ans='W'; }
                cout<<arr2[i][j];
            }
            if(ans==temp) { if(ans=='W') {ans='B';} else { ans='W'; } }
            cout<<endl;
        }
    }
    return 0;
}