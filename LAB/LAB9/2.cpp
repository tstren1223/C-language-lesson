#include<stdio.h>
#include<cmath>
void order(double *a,double *b){
	double k;
	if(*a>*b){
		k=*a;
		*a=*b;
		*b=k;
	}
}
void sumavg(double n1,double n2,double n3,double *sump,double *avgp){
	*(sump)=n1+n2+n3;
	*(avgp)=*(sump)/3;
}
void separate( double num,char * signp,int * wholep,double * fracp){
	num>=0?*(signp)='+':*(signp)='-';
	*(wholep)=(int)num;
	*(fracp)=fabs(num-*(wholep));
}
int main(){
	double a,b,n1,n2,n3,sump,avgp;
	double num,fracp;
	char signp;
	int wholep;
	
	printf("----subroutine A----\n");
	while(scanf("%lf%lf",&a,&b)!=EOF){
		order(&a,&b);
		printf("%lf,%lf\n",a,b);
	}
	printf("----subroutine B----\n");
	while(scanf("%lf%lf%lf",&n1,&n2,&n3)!=EOF){
		sumavg(n1,n2,n3,&sump,&avgp);
		printf("%lf,%lf\n",sump,avgp);
	}
	printf("----subroutine C----\n");
	while(scanf("%lf",&num)!=EOF){
		separate(num,&signp,&wholep,&fracp);
		printf("%c %d %lf\n",signp,abs(wholep),fracp);
	}
	return 0;
	
}
