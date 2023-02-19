#include <bits/stdc++.h>
using namespace std;

// UNIMINUTO plantilla

typedef long long ll;
#define inf 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
typedef pair<int,int> pir;
string sstr[]={"NO\n","YES\n"};
const int N=200010;
int w,h,l;
int w1,h1,l1,w2,h2,l2;
int pos1,pos2;

double cal3()
{
	double ans=1e18;
	int d1[4],d2[4];
	int ww,hh,ll;
	if(pos1%3==0){
		d1[0]=w-w1,d2[0]=w-w2;
		d1[1]=h-h1,d2[1]=h-h2;
		d1[2]=w1,d2[2]=w2;
		d1[3]=h1,d2[3]=h2;
		ww=l,hh=w,ll=h;
	}
	else if(pos1%3==1){
		d1[0]=l-l1,d2[0]=l-l2;
		d1[1]=h-h1,d2[1]=h-h2;
		d1[2]=l1,d2[2]=l2;
		d1[3]=h1,d2[3]=h2;
		ww=w,hh=h,ll=l;
	}
	else{
		d1[0]=l-l1,d2[0]=l-l2;
		d1[1]=w-w1,d2[1]=w-w2;
		d1[2]=l1,d2[2]=l2;
		d1[3]=w1,d2[3]=w2;
		ww=h,hh=w,ll=l;
	}
	// cout<<d1[0]<<' '<<d1[1]<<' '<<d1[2]<<' '<<d1[3]<<' '<<ll<<'\n';
	// cout<<d2[0]<<' '<<d2[1]<<' '<<d2[2]<<' '<<d2[3]<<' '<<ww<<'\n';
	for(int i=0;i<4;i++){
		ans=min(ans,sqrt(1.0*(ww+d1[i]+d2[i])*(ww+d1[i]+d2[i])+1.0*abs(d1[(i+1)%4]-d2[(i+1)%4])*abs(d1[(i+1)%4]-d2[(i+1)%4])));
		ans=min(ans,sqrt(1.0*(ww+d1[i]+d2[i])*(ww+d1[i]+d2[i])+1.0*abs(d1[(i-1+4)%4]-d2[(i-1+4)%4])*abs(d1[(i-1+4)%4]-d2[(i-1+4)%4])));
	}
	for(int i=0;i<4;i++){
		ans=min(ans,sqrt(1.0*(ww+d1[i]+d2[(i+1)%4])*(ww+d1[i]+d2[(i+1)%4])+1.0*(d2[i]+d1[(i+1)%4])*(d2[i]+d1[(i+1)%4])));
	}
	for(int i=0;i<4;i++){
		ans=min(ans,sqrt(1.0*(ww+d1[(i-1+4)%4]+d2[(i+1)%4])*(ww+d1[(i-1+4)%4]+d2[(i+1)%4])+1.0*(ll+d2[i]+d1[i])*(ll+d2[i]+d1[i])));
		ans=min(ans,sqrt(1.0*(ww+d1[(i+1)%4]+d2[(i-1+4)%4])*(ww+d1[(i+1)%4]+d2[(i-1+4)%4])+1.0*(ll+d2[i]+d1[i])*(ll+d2[i]+d1[i])));
	}

	return ans;
}

double cal2()
{
	double ans=1e18;
	int d1[4],d2[4];
	int ww,hh,ll;
	if(pos1==1) d2[0]=w-w2,d2[2]=w2;
	else if(pos1==2) d2[0]=h-h2,d2[2]=h2;
	else if(pos1==3) d2[0]=l2,d2[2]=l-l2;
	else if(pos1==4) d2[0]=w2,d2[2]=w-w2;
	else if(pos1==5) d2[0]=h2,d2[2]=h-h2;
	else d2[0]=l-l2,d2[2]=l2;

	if(pos2==1) d1[0]=w-w1,d1[2]=w1;
	else if(pos2==2) d1[0]=h-h1,d1[2]=h1;
	else if(pos2==3) d1[0]=l1,d1[2]=l-l1;
	else if(pos2==4) d1[0]=w1,d1[2]=w-w1;
	else if(pos2==5) d1[0]=h1,d1[2]=h-h1;
	else d1[0]=l-l1,d1[2]=l1;
	if(pos1%3!=0&&pos2%3!=0){
		d1[1]=l-l1;
		d1[3]=l1;
		d2[1]=l-l2;
		d2[3]=l2;
		hh=l;
		if(pos1%3==1) ll=h,ww=w;
		else ll=w,ww=h; 
	}
	else if(pos1%3!=1&&pos1%3!=1){
		d1[1]=w-w1;
		d1[3]=w1;
		d2[1]=w-w2;
		d2[3]=w2;
		hh=w;
		if(pos1%3==0) ll=h,ww=l;
		else ll=l,ww=h; 
	}
	else{
		d1[1]=h-h1;
		d1[3]=h1;
		d2[1]=h-h2;
		d2[3]=h2;
		hh=h;
		if(pos1%3==0) ll=w,ww=l;
		else ll=l,ww=w; 
	}
	// cout<<d1[0]<<' '<<d1[1]<<' '<<d1[2]<<' '<<d1[3]<<' '<<ll<<'\n';
	// cout<<d2[0]<<' '<<d2[1]<<' '<<d2[2]<<' '<<d2[3]<<' '<<ww<<'\n';
	ans=min(ans,sqrt(1.0*(d1[0]+d2[0])*(d1[0]+d2[0])+1.0*abs(d1[1]-d2[1])*abs(d1[1]-d2[1])));
	ans=min(ans,sqrt(1.0*(d1[0]+d2[1])*(d1[0]+d2[1])+1.0*(d1[1]+d2[0])*(d1[1]+d2[0])));
	ans=min(ans,sqrt(1.0*(d1[0]+d2[3])*(d1[0]+d2[3])+1.0*(d1[3]+d2[0])*(d1[3]+d2[0])));
	ans=min(ans,sqrt(1.0*(d1[2]+d2[0])*(d1[2]+d2[0])+1.0*(d1[1]+d2[1]+ll)*(d1[1]+d2[1]+ll)));
	ans=min(ans,sqrt(1.0*(d1[2]+d2[0])*(d1[2]+d2[0])+1.0*(d1[3]+d2[3]+ll)*(d1[3]+d2[3]+ll)));
	ans=min(ans,sqrt(1.0*(d2[2]+d1[0])*(d2[2]+d1[0])+1.0*(d2[1]+d1[1]+ww)*(d2[1]+d1[1]+ww)));
	ans=min(ans,sqrt(1.0*(d2[2]+d1[0])*(d2[2]+d1[0])+1.0*(d2[3]+d1[3]+ww)*(d2[3]+d1[3]+ww)));
	return ans;
}

signed main()
{
	//#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   //#endif
	cin>>w>>h>>l;
	cin>>w1>>h1>>l1;
	cin>>w2>>h2>>l2;
	if(w1==0) pos1=4;
	else if(w1==w) pos1=1;
	else if(h1==0) pos1=5;
	else if(h1==h) pos1=2;
	else if(l1==0) pos1=3;
	else if(l1==l) pos1=6;
	else assert(0);
	if(w2==0) pos2=4;
	else if(w2==w) pos2=1;
	else if(h2==0) pos2=5;
	else if(h2==h) pos2=2;
	else if(l2==0) pos2=3;
	else if(l2==l) pos2=6;
	else assert(0);

	//cout<<pos1<<' '<<pos2<<'\n';

	if(abs(pos1-pos2)==0){
		printf("%.3lf",sqrt(1.0*(w1-w2)*(w1-w2)+1.0*(h1-h2)*(h1-h2)+1.0*(l1-l2)*(l1-l2)));
	}
	else if(abs(pos1-pos2)==3){
		printf("%.3lf",cal3());
	}
	else{
		printf("%.3lf",cal2());
	}
}