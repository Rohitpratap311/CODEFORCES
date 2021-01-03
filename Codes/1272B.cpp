
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

void solveCP311()
{
    string s;
    cin>>s;
    ll arr[4]={ 0 };
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='L') { arr[0]++; }
        if(s[i]=='R') { arr[1]++; }
        if(s[i]=='U') { arr[2]++; }
        if(s[i]=='D') { arr[3]++; }
    }
    ll minlr=min(arr[0],arr[1]);
    ll minud=min(arr[2],arr[3]);
    if(minlr==0)
    {
        if(arr[2]>0&&arr[3]>0)
        {
            cout<<2<<endl<<"UD"<<endl;
        }
        else
        {
            cout<<0<<endl<<endl;
        }
    }
    else if(minud==0)
    {
        if(arr[0]>0&&arr[1]>0)
        {
            cout<<2<<endl<<"RL"<<endl;
        }
        else
        {
            cout<<0<<endl<<endl;
        }
    }
    else
    {
        ll a=minlr;
        ll b=minud;
        ll ans=2*(a+b);
        cout<<ans<<endl;
        while(a--)
        {
            cout<<'L';
        }
        while(b--)
        {
            cout<<'U';
        }
        a=minlr;
        b=minud;
        while(a--)
        {
            cout<<'R';
        }
        while(b--)
        {
            cout<<"D";
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