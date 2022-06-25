#include<stdio.h>
void sumavg(double n1,double n2,double n3,double *sump,double *avgp){
	*(sump)=n1+n2+n3;
	*(avgp)=*(sump)/3;
}
int main(){
	double n1,n2,n3,sump,avgp;
	printf("Please enter three real numbers\n");
	scanf("%lf %lf %lf",&n1,&n2,&n3);
	sumavg(n1,n2,n3,&sump,&avgp);
	printf("sum:%lf\navg:%lf\n",sump,avgp);
	return 0;
}
