
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll n;
    cin>>n;
    ll arr[n]={0};
    ll prev=0,curr=0;
    bool flag1=true,flag4=true;
    ll flag2=0,flag3=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
        {
            curr=arr[i];
            prev=arr[i];
        }
        else
        {
            prev=arr[i-1];
            curr=arr[i];
            if(curr<prev) 
            { 
                flag1=false; 
                if(flag4)
                {   
                    flag2=i-1;
                    flag4=false;
                }
            }
        }
    }
    if(flag1)
    {
        cout<<"yes"<<endl<<"1 1"; 
    }
    else
    {
        for(ll i=flag2;i<n-1;i++)
        {
            if(arr[i+1]>arr[i])
            {
                flag3=i;
                break;
            }
        }
        if(flag3==0) { flag3=n-1; }
        sort(arr+flag2,arr+flag3+1);
        bool chk=true;
        for(ll i=0;i<n;i++)
        {
            if(i!=0&&arr[i]<arr[i-1])
            {
                chk=false;
                break;
            }
        }
        if(chk)
        {
            cout<<"yes"<<endl<<flag2+1<<" "<<flag3+1;
        }
        else
        {
            cout<<"no";
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