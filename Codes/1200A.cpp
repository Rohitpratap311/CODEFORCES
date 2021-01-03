
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solveCP311()
{
    int arr[10]={0};
    ll n;
    cin>>n;
    for(ll j=0;j<n;j++)
    {
        char ch;
        cin>>ch;
        if(ch=='L')
        {
            for(ll i=0;i<10;i++)
            {
                if(arr[i]==0) { arr[i]=1; break; }
            }
        }
        else if(ch=='R')
        {
            for(ll i=9;i>=0;i--)
            {
                if(arr[i]==0) { arr[i]=1; break; }
            }
        }
        else
        {
            int x;
            x=ch-'0';
            arr[x]=0;
        }
    }
    for(ll i=0;i<10;i++)
    {
        cout<<arr[i];
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