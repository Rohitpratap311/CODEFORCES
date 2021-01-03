
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll arr2[8]={0};
    bool flag=true;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[arr[i]]++;
        if(arr[i]==5||arr[i]==7)
        {
            flag=false;
        }
    }
    if(arr2[1]!=arr2[4]+arr2[6])
    {
        flag=false;
    }
    if(arr2[6]<arr2[3])
    {
        flag=false;
    }
    if((arr2[2]-arr2[4])!=(arr2[6]-arr2[3]))
    {
        flag=false;
    }
    if(!flag)
    {
        cout<<"-1";
    }
    else
    {
        //cout<<n/3<<endl;
        while(arr2[4]>0)
        {
            cout<<"1 2 4"<<endl;
            arr2[4]--,arr2[2]--,arr2[1]--;
        }
        while(arr2[3]>0)
        {
            cout<<"1 3 6"<<endl;
            arr2[1]--,arr2[3]--,arr2[6]--;
        }
        while(arr2[1]>0)
        {
            cout<<"1 2 6"<<endl;
            arr2[1]--;
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