//該題是要找the minimum of F(x)=max(Si(x))!x範圍0~1000且a>=0------>因為F是x值帶進去的max 且皆為下凸函數(a>=0)故從最極限的右邊或左邊開始往另一邊跑,會發現必定F是類似下凸函數的圖形 
#include<stdio.h>
#include<iostream>
#include<algorithm>//max函數
using namespace std;
const int maxn = 10000+10;
int n,a[maxn],b[maxn],c[maxn];

double F(double x){
	double ans =a[0]*x*x+b[0]*x+c[0];
	for(int i=1;i<n;i++)
		ans=max(ans,a[i]*x*x+b[i]*x+c[i]);//全部的dateset輸入x值比最大的! 
	return ans;	
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d%d%d",&a[i],&b[i],&c[i]);
		double L=0,R=1000;
		for(int i=0;i<100;i++){
			double m1=L+(R-L)/3;
			double m2=R-(R-L)/3;
			if(F(m1)<F(m2))
				R=m2;
			else
				L=m1;
		}
		//printf("\nL=%lf,R=%lf\n",L,R);
		printf("\nThe Max Is %.4lf\n",F(L));
	}
	system("pause");
	return 0;
}
