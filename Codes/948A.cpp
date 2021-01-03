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
        ll r,c;
        cin>>r>>c;
        string ans="Yes";
        char arr[r][c];
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='.')
                {
                    arr[i][j]='D';
                }
            }
        }
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++)
            {
                if(arr[i][j]=='S')
                {
                    if(i-1>=0) { if(arr[i-1][j]=='W') { ans="No"; break;} }
                    if(i+1<r)  { if(arr[i+1][j]=='W') { ans="No"; break;} }
                    if(j-1>=0) { if(arr[i][j-1]=='W') { ans="No"; break;} }
                    if(j+1<c)  { if(arr[i][j+1]=='W') { ans="No"; break;} }
                }
            }
        }
        if(ans=="No")
        {
            cout<<ans;
        }
        else
        {
            cout<<ans<<endl;
            for(ll i=0;i<r;i++)
            {
                for(ll j=0;j<c;j++)
                {
                    cout<<arr[i][j];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}