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
       ll ti,x,y,p,q;
       string str;
       cin>>ti>>x>>y>>p>>q>>str;
       ll n,s,e,w;
       if(p>=x) { e=p-x; w=0; } else { w=x-p; e=0; }
       if(q>=y) { n=q-y; s=0; } else { s=y-q; n=0; }
       //cout<<n<<' '<<s<<' '<<e<<' '<<w<<endl;
       for(ll i=0;i<ti;i++)
       {
           //cout<<n<<' '<<s<<' '<<e<<' '<<w<<endl;
           if((str[i]=='N')&&n>0) { n--; }
           if((str[i]=='W')&&w>0) { w--; }
           if((str[i]=='E')&&e>0) { e--; }
           if((str[i]=='S')&&s>0) { s--; }
           if(s+w+n+e==0)
           {
               cout<<i+1;
               return 0;
           }
       }
       cout<<"-1";
       
    }
    return 0;
}