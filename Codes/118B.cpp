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
        ll n;
        cin>>n;
        ll x=(2*n)+1;
        ll arr[x][x];

        for(ll i=0;i<x;i++)
        {
            for(ll j=0;j<n;j++)
            {
                arr[i][j]=-1;
            }
        }
        for(ll i=0;i<x;i++)
        {
            if(i>n)
            {
                arr[i][n]=arr[i-1][n]-1;
            }
            else
            {
                arr[i][n]=i;
            }
            for(ll j=n+1;j<x;j++)
            {
                arr[i][j]=arr[i][j-1]-1;
            }
            for(ll j=n-1;j>=0;j--)
            {
                arr[i][j]=arr[i][j+1]-1;
            }
        }
        for(ll i=0;i<x;i++)
        {
            for(ll j=0;j<x;j++)
            {
                if(arr[i][j]>=0)
                {
                    cout<<arr[i][j];
                    if((j!=x)&&(arr[i][j+1]>=0))
                    {
                        cout<<" ";
                    }
                }

                else
                {
                    if(j>n)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"  ";
                    }
                }

                //cout<<arr[i][j]<<' ';
            }
            cout<<endl;
        }

    }
    return 0;
}