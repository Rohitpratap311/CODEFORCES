#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

using ll=long long;
using ld=long double;

void solveCP311()
{
   ll r,c;
   cin>>r>>c;
   char arr[r][c];
   for(ll i=0;i<r;i++)
   {
        for(ll j=0;j<c;j++)
        {
           cin>>arr[i][j];
        }
   }
   for(ll i=0;i<r;i++)
   {
       bool flag=true;
       for(ll j=0;j<c;j++)
       {
           if(arr[i][j]=='S')
           {
               flag=false;
               break;
           }
       }
       if(flag)
       {
           for(ll j=0;j<c;j++)
           {
               arr[i][j]='x';
           }
       }
   }
   for(ll i=0;i<c;i++)
   {
       bool flag=true;
       for(ll j=0;j<r;j++)
       {
           if(arr[j][i]=='S')
           {
               flag=false;
               break;
           }
       }
       if(flag)
       {
           for(ll j=0;j<r;j++)
           {
               arr[j][i]='x';
           }
       }
   }
   ll ans=0;
   for(ll i=0;i<r;i++)
   {
        for(ll j=0;j<c;j++)
        {
           if(arr[i][j]=='x')
           {
               ans++;
           }
        }
   }
   cout<<ans;
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
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}