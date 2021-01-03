
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n,count=0;
    cin>>n;
    ll  arr1[n],arr2[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    for(ll i=0;i<n;i++)
    {
        ll temp=arr1[i];
        for(ll j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(temp==arr2[j])
                {
                    count++;
                    break;
                }
            }
        }
    }
    cout<<n-count;

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