
//#Rohitpratap311
//#Keep Calm And Stay Happy

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
ld pi=2.0*acos(0.0);
void solveCP311()
{
   ld x1,y1,r1,x2,y2,r2;
   cin>>x1>>y1>>r1>>x2>>y2>>r2;
   ld d=pow((pow((x1-x2),2.0)+pow((y1-y2),2.0)),0.5);
   ld area=0.0;
   if(d>=r1+r2)
   {
       area=0;
   }
    else if(d<=abs(r1-r2))
   {
       ld r=min(r1,r2);
       ll r2=r*r;
       area=pi*r2;
   }
   else
   {
       ld r12=r1*r1;
       ld r22=r2*r2;
       ld ds=d*d;
       ld d1=(r12-r22+ds)/(2.0*d);
       ld d2=(r22-r12+ds)/(2.0*d);
       ld d12=d1*d1;
       ld d22=d2*d2;
       area=r12*acos(d1/r1)+r22*acos(d2/r2)-(r1/2.0)*r1*sin(2.0*acos(d1/r1))-(r2/2.0)*r2*sin(2.0*acos(d2/r2));
       //cout<<r12<<endl<<r22<<endl<<ds<<endl;
   }

   cout<<fixed<<setprecision(20)<<area;
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