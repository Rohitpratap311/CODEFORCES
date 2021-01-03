
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
   ll n,m;
   cin>>n>>m;
   for(ll i=1;i<=n;i++)
   {
       for(ll j=1;j<=m;j++)
       {
           ll temp;
           cin>>temp;
           if((i+j)%2==0)
           {
               if(temp%2!=0) { temp++; }
           }
           else
           {
               if(temp%2==0) { temp++; }
           }
           cout<<temp<<" ";
       }
       cout<<endl;
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}