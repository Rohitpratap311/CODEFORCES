
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll n,m;
vector<vector<char>> arr;
bool already[1000][1000]={};

void up(ll r,ll c,ll &ans);
void down(ll r,ll c,ll &ans);
void right(ll r,ll c,ll &ans);
void left(ll r,ll c,ll &ans);

void up(ll r,ll c,ll &ans)
{
    already[r][c]=true;
    if(r-1<0) { return ; }
    if(arr[r-1][c]=='*') { ans++; return; }
    ll nr=r-1,nc=c;
    if(!already[nr][nc])
    {
        up(nr,nc,ans);
        right(nr,nc,ans);
        left(nr,nc,ans);
        down(nr,nc,ans);
    }
    return;
}

void down(ll r,ll c,ll &ans)
{
    already[r][c]=true;
    if(r+1>n-1) { return ; }
    if(arr[r+1][c]=='*') { ans++; return; }
    ll nr=r+1,nc=c;
    if(!already[nr][nc])
    {
        down(nr,nc,ans);
        right(nr,nc,ans);
        left(nr,nc,ans);
        up(nr,nc,ans);
    }
    return;
}

void right(ll r,ll c,ll &ans)
{
    already[r][c]=true;
    if(c+1>m-1) { return ; }
    if(arr[r][c+1]=='*') { ans++; return; }
    ll nr=r,nc=c+1;
    if(!already[nr][nc])
    {
        up(nr,nc,ans);
        down(nr,nc,ans);
        right(nr,nc,ans);
        left(nr,nc,ans);
    }
    return;
    
}

void left(ll r,ll c,ll &ans)
{
    already[r][c]=true;
    if(c-1<0) { return ; }
    if(arr[r][c-1]=='*') { ans++; return; }
    ll nr=r,nc=c-1;
    if(!already[nr][nc])
    {
        up(nr,nc,ans);
        down(nr,nc,ans);
        left(nr,nc,ans);
        right(nr,nc,ans);
    }
    return;
}

void solveCP311()
{
    ll k;
    cin>>n>>m>>k;
    for(ll i=0;i<n;i++)
    {
        vector<char> temp(m);
        for(ll j=0;j<m;j++)
        {
            cin>>temp[j];
        }
        arr.push_back(temp);
    }
    ll ans=0;
    for(ll i=0;i<k;i++)
    {
        memset(already,false,sizeof(already));
        ll r,c;
        cin>>r>>c;
        r--,c--;
        ll ans=0;
        already[r][c]=true;
        up(r,c,ans);
        down(r,c,ans);
        right(r,c,ans);
        left(r,c,ans);
        cout<<ans<<endl;
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