#include<bits/stdc++.h>
using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

bool cmp(string a,string b)
{
	return a.size()<b.size();
}

void solveCP311()
{
    ll n;
    cin>>n;
    string arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,cmp);
    bool flag=true;
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i+1].find(arr[i]) == string::npos)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES"<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solveCP311();
    }
    return 0;
}