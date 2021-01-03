
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    string a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"YES";
    }
    else if(a.size()==1||b.size()==1||a.size()!=b.size())
    {
        cout<<"NO";
    }
    else
    {
        bool f1=false,f2=false;
        for(ll i=0;i<a.size();i++)
        {
            if(a[i]=='1') { f1=true; }
            if(b[i]=='1') { f2=true; }
            if(f1&&f2) { break ; }
        }
        if(f1&&f2)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }

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