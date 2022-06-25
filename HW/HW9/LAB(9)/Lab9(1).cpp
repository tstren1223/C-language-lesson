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
	double a,b,c,d,e,f,sump,avgp;
	double num,fracp;
	char signp;
	int wholep;
	
	printf("Please input three pairs of real numbers!\n");
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)){
		printf("Three pairs of real numbers:\n(%.2lf,%.2lf),(%.2lf,%.2lf),(%.2lf,%.2lf)\n",a,b,c,d,e,f);
		printf("\n--------After order   --------\n");
		order(&a,&b);
		order(&c,&d);
		order(&e,&f);
		printf("Three pairs of real numbers:\n(%.2lf,%.2lf),(%.2lf,%.2lf),(%.2lf,%.2lf)\n",a,b,c,d,e,f);
		printf("\n--------After sumavg   --------\n");
		printf("Three pairs of real numbers:\n(%.2lf,%.2lf),(%.2lf,%.2lf),(%.2lf,%.2lf)\n",a,b,c,d,e,f);
		printf("The sum/avg of the larger numbers in each pair:\n");
		sumavg(b,d,f,&sump,&avgp);
		printf("sum: %.2lf, avg: %.2lf\n",sump,avgp);
		printf("\n--------After separate   --------\n");
		separate(sump,&signp,&wholep,&fracp);
		printf("Sum:%6.2lf is composed of %c %4d %8.2lf\n",sump,signp,abs(wholep),fracp);
		separate(avgp,&signp,&wholep,&fracp);
		printf("Avg:%6.2lf is composed of %c %4d %8.2lf\n",avgp,signp,abs(wholep),fracp);
		printf("\n--------------------\nPlease input three pairs of real numbers!\n");
	}
	return 0;
	
}
