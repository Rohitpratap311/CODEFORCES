
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solveCP311()
{
    char arr[4][4];
    for(ll i=0;i<4;i++)
    {
        for(ll j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    string ans="NO";
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            ll wl=0,bl=0;
            char a=arr[i][j],b=arr[i][j+1],c=arr[i+1][j],d=arr[i+1][j+1];
            if(a=='#') { bl++; } else { wl++; }
            if(b=='#') { bl++; } else { wl++; }
            if(c=='#') { bl++; } else { wl++; }
            if(d=='#') { bl++; } else { wl++; }
            if(wl==1||bl==1||wl==0||bl==0)
            {
                ans="YES"; break;
            }
            wl=0,bl=0;
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