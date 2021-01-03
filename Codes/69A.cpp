#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#Rohitpratap311

int main()
{
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
        //cout<<sum<<endl;
        if(sum!=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}