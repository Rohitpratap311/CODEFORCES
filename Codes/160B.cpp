
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;
    char arr1[n],arr2[n];
    ll j=0;
    for(ll i=0;i<n;i++)
    {
        arr1[i]=str[j];
        j++;
    }
    for(ll i=0;i<n;i++)
    {
        arr2[i]=str[j];
        j++;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    bool flag1=true;
    for(ll i=0;i<n;i++)
    {
        //cout<<arr1[i]<<" "<<arr2[i]<<endl;
        if(arr2[i]<=arr1[i])
        {
            flag1=false;
            break;
        }
    }
    bool flag2=true;
    for(ll i=0;i<n;i++)
    {
        //cout<<arr1[i]<<" "<<arr2[i]<<endl;
        if(arr2[i]>=arr1[i])
        {
            flag2=false;
            break;
        }
    }
    if(flag1||flag2) { cout<<"YES"; } else { cout<<"NO"; }
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