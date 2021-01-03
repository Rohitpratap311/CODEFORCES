
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    ll n,q;
    cin>>n>>q;
    vector<ll> arr(n);
    ll temp;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        if(i==0) { arr[i]=temp; }
        else { arr[i]=arr[i-1]+temp; } 
    }
    ll k;
    while(q--)
    {
        cin>>k;
        ll l=-1,r=n,mid;
        while(r>l+1)
        {
            mid=(l+r)/2;
            if(arr[mid]<k)
            {
                l=mid;
            }
            else
            {
                r=mid;
            }
        }
        cout<<r+1<<" ";
        if(r==0) { cout<<k; }
        else
        {
            cout<<k-arr[r-1];
        }
        cout<<endl;
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