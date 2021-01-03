
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solveCP311()
{
    int n;
    cin>>n;
    vector<string> vec(n);
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        vec[i]=temp;
    }
    string ans="YES";
    for(int i=0;i<n;i++)
    {
        string temp=vec[i];
        for(int j=0;j<n;j++)
        {
            if(temp[j]=='1')
            {
                if(i!=n-1&&j!=n-1)
                {
                    if(vec[i][j+1]=='0'&&vec[i+1][j]=='0')
                    {
                        ans="NO";
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--)
    {
    	solveCP311();
    }
    //cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;
	return 0;
}