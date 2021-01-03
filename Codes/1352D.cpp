
//#Rohitpratap311
//#Keep Calm And Stay Happy

#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
ll debug=0;
void solveCP311()
{
    debug++;
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans1=arr[0];
    ll ans2=0;
    ll prev=arr[0];
    ll move=0;
    for(ll i=0,j=n-1;i<=j;)
    {
        if(i==0) { i++; move++; }
        else
        {
            ll x=0;
            while(x<=prev&&i<=j)
            {
                x+=arr[i];
                i++;
            }
            move++;
            prev=x;
            ans1+=x;
        }
        if(!(i<=j)) { break; }
        ll y=0;
        while(y<=prev&&j>=i)
        {
            y+=arr[j];
            j--;
        }
        move++;
        prev=y;
        ans2+=y;
        if(!(i<=j)) { break; }
    }
    cout<<move<<" "<<ans1<<" "<<ans2<<endl;
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