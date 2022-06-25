#include<stdio.h>
#include <cmath>
#define PI 3.14159265
void reflectx(double *u,double *v){
	(*v)*=-1;
}
void reflecty(double *u,double *v){
	(*u)*=-1;
}
void rotate(double *u,double *v,double degree){
	double a,b;
	a=cos(degree)*(*u)-sin(degree)*(*v);
	b=sin(degree)*(*u)+cos(degree)*(*v);
	(*u)=a;
	(*v)=b;
}
double angle(double u,double v){
	return atan2(v,u);
}
void encoder(int *x, int N, int bias){
	long long reg,times=0,pow=1;
	reg=(*x);
	while(reg){
		times++;
		reg/=10;
	}
	for(int i=1;i<times;i++){
		pow*=10;
	}
	for(int i=1;i<=N;i++){
		reg=(*x)%10;
		(*x)=(*x)/10+reg*pow;
	}
	//printf("%d\n",*x);
	(*x)+=bias;
	(*x)%=(pow*10);
}
int main(){
	int cho,con;
	double degree,u,v;
	int x,N,bias;
	printf("----part A----\nplease input initial vector (u,v):");
	while(scanf("%lf%lf",&u,&v)!=EOF){
		con=1;
		while(con){
			printf("what can I help u?\n1:rotate\n2:mirrorX\n3:mirrorY\n4:exit\n");
			scanf("%d",&cho);
			switch(cho){
				case 1:
					printf("Please input degree phi in radius:");
					scanf("%lf",&degree);
					rotate(&u,&v,degree);
					printf("(%lf,%lf), %lf\n",u,v,angle(u,v));
				
					break;
				case 2:
					reflectx(&u,&v);
					printf("(%lf,%lf), %lf\n",u,v,angle(u,v));
					break;
				case 3:
					reflecty(&u,&v);
					printf("(%lf,%lf), %lf\n",u,v,angle(u,v));
					break;
				case 4:
					printf("(%lf,%lf), %lf\n",u,v,angle(u,v));
					con=0;
					break;
			}
			printf("please input initial vector (u,v):");
		}
	}
	printf("----part B----\n");
	while(scanf("%d%d%d",&x,&N,&bias)!=EOF){
		encoder(&x,N,bias);
		printf("%d\n",x);
	}
}
