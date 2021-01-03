
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int king=0,rook=2,bishop=2;
    if(x1==x2&&y1==y2)
    {
        cout<<"0 0 0"<<endl;
        return ;
    }
    if(x1==x2||y1==y2)
    {
        rook=1;
    }
    int a=abs(x1-x2);
    int b=abs(y1-y2);
    king=min(a,b)+abs(a-b);
    for(int i=x1,j=y1;i<=8&&j<=8;i++,j++)
    {
        if(i==x2&&j==y2)
        {
            bishop=1; break;
        }
    }
    for(int i=x1,j=y1;i>=1&&j>=1;i--,j--)
    {
        if(i==x2&&j==y2)
        {
            bishop=1; break;
        }
    }
    for(int i=x1,j=y1;i>=1&&j<=8;i--,j++)
    {
        if(i==x2&&j==y2)
        {
            bishop=1; break;
        }
    }
    for(int i=x1,j=y1;i<=8&&j>=1;i++,j--)
    {
        if(i==x2&&j==y2)
        {
            bishop=1; break;
        }
    }
    if(((x1+y1)%2==0)&&((x2+y2)%2!=0))
    {
        bishop=0;
    }
    if(((x1+y1)%2!=0)&&((x2+y2)%2==0))
    {
        bishop=0;
    }
    cout<<rook<<" "<<bishop<<" "<<king<<endl;
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