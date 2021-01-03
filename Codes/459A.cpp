
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    bool flag=false;
    ll a1=abs(y2-y1);
    ll a2=abs(x2-x1);
    if(a1==0||a2==0||a1==a2)
    {
        flag=true;
    }
    if(flag)
    {
        ll a=a1;
        ll x3,x4,y3,y4;
        if(x1==x2)
        {
            x3=x1+a;
            x4=x1+a;
            y3=y1;
            y4=y2;
        }
        else if(y1==y2)
        {
            a=a2;
            y3=y1+a;
            y4=y1+a;
            x3=x1;
            x4=x2;
        }
        else
        {
            x4=x2;
            x3=x1;
            y3=y2;
            y4=y1;
        }
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else
    {
        cout<<"-1";
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