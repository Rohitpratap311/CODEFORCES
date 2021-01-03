
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
   string s;
   cin>>s;
   ll n=s.size();
   string ans=s.substr(0,n-1);
   for(ll i=0;i<n;i++)
   {
       if(s[i]=='0')
       {
           ans=s.substr(0,i)+s.substr(i+1,n);
           break;
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