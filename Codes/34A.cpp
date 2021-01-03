#include<bits/stdc++.h>

using namespace std;
typedef long long ll; 
//#Rohitpratap311

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) { cin>>arr[i]; }
    int x=1,y=n,min=abs(arr[0]-arr[n-1]);
    for(int i=0;i<n-1;i++)
    {
            int temp=abs(arr[i]-arr[i+1]);
            if(temp<min)
            {
                min=temp;
                x=i+1;
                y=i+2;
            }
    }
    cout<<x<<' '<<y;
    return 0;
}