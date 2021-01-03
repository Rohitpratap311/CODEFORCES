
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void leftrotate(string &s, ll d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
 
// In-place rotates s towards right by d
void rightrotate(string &s, ll d)
{
   leftrotate(s, s.length()-d);
}
 

void solveCP311()
{
    string s;
    cin>>s;
    ll m;
    cin>>m;
    ll n=s.size();
    for(ll j=0;j<m;j++)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        l--,r--;
        ll x=r-l+1;
        k=k%x;
        string temp=s.substr(l,x);
        rightrotate(temp,k);
        s=s.substr(0,l)+temp+s.substr(r+1,n-x-l);
    }
    cout<<s<<endl;
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