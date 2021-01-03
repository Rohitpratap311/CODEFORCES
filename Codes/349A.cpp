
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    ll a=0,b=0,c=0,n;
    string ans="YES";
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) { cin>>arr[i]; }
    for(ll i=0;i<n;i++)
    {
        ll temp=arr[i];
        if(temp==25)
        {
            a++;
        }
        else if(temp==50)
        {
            b++;
        }
        else
        {
            c++;
        }
        ll need=temp-25;
        if(need)
        {
            if(need==25)
            {
                if(a==0)
                {
                    ans="NO";
                    break;
                }
                else
                {
                    a--;
                }
            }
            else
            {
                if(b>=1&&a>=1)
                {
                    a--;
                    b--;
                }
                else if(a>=3)
                {
                    a=a-3;
                }
                else
                {
                    ans="NO";
                    break;
                }
            }
        }
    }
    cout<<ans;
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