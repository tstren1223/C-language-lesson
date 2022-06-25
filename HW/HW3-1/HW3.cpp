#include<stdio.h>
int main (){
	printf("Please input 5 number and x.\n");
	double a0,a1,a2,a3,a4,x;
	int i;
	scanf("%lf%lf%lf%lf%lf%lf",&a0,&a1,&a2,&a3,&a4,&x);
	printf("A:%lf+%lf+%lf+%lf+%lf\n",a4*x*x*x*x,a3*x*x*x,a2*x*x,a1*x,a0);
	printf("%d %d %d %d %d",&a0,&a1,&a2,&a3,&a4,&x);
	printf("B:%lf\n",a4);
	printf("B:%lf+%lf\n",a4*x,a3);
	printf("B:%lf+%lf+%lf\n",a4*x*x,a3*x,a3);
	printf("B:%lf+%lf+%lf+%lf\n",a4*x*x*x,a3*x*x,a2*x,a1);
	printf("B:%lf+%lf+%lf+%lf+%lf\n",a4*x*x*x*x,a3*x*x*x,a2*x*x,a1*x,a0);
	/*for(int i=0;i<=4;i++){
		(&a0)*x;
	}*/
	return 0;
}
