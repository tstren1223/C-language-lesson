//���D�O�n��the minimum of F(x)=max(Si(x))!x�d��0~1000�Ba>=0------>�]��F�Ox�ȱa�i�h��max �B�Ҭ��U�Y���(a>=0)�G�q�̷������k��Υ���}�l���t�@��],�|�o�{���wF�O�����U�Y��ƪ��ϧ� 
#include<stdio.h>
#include<iostream>
#include<algorithm>//max���
using namespace std;
const int maxn = 10000+10;
int n,a[maxn],b[maxn],c[maxn];

double F(double x){
	double ans =a[0]*x*x+b[0]*x+c[0];
	for(int i=1;i<n;i++)
		ans=max(ans,a[i]*x*x+b[i]*x+c[i]);//������dateset��Jx�Ȥ�̤j��! 
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
