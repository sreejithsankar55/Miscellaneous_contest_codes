//https://www.codechef.com/BIBA2018/problems/RECTSQR
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	 ll t;
	 cin>>t;
	 while(t--)
	 {
		 ll a,b,sum=0,c,d,so;
		 cin>>a>>b;
		 ll mini = min(a,b);
		 for ( ll i = mini ; i>=1 ; i--)
		 {
			 so=pow(i,2);
			 c=abs(b-i+1);
			 d=abs(a-i+1);
			 so=c*d*so;
			 sum+=so;
		 }
		 cout<<sum<<endl;
	 }
	  return 0;
  }
