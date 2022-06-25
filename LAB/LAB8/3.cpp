#include <stdio.h>
bool ne=0;
double k;
double k1,k2,k3;
void parse(int a3,int a2,int a1,int a0);
bool root(int,int,int,int,int,int);
int main(){
	int a3,a2,a1,a0;
	while(scanf("%d %d %d %d",&a3,&a2,&a1,&a0)){
		parse(a3,a2,a1,a0);
	
	if(ne){
		printf("\n");
	}
	else
		printf("no rational solution!\n");
	ne=0;
	}
	return 0;
}
bool root(int a3,int a2,int a1,int a0,int p,int q){
	k=1.0*p/q;
//	printf("p=%d\nq=%d\nk=%lf\nans=%lf\n",p,q,k,a3*k*k*k+a2*k*k+a1*k+a0);
	if(a3*k*k*k+a2*k*k+a1*k+a0>=0?a3*k*k*k+a2*k*k+a1*k+a0<1e-10:-(a3*k*k*k+a2*k*k+a1*k+a0)<1e-10){
		ne=1;
		if(k1==0){
			k1=k;
		}
		else if(k2==0){
			k2=k;
		}
		else if(k3==0)
			k3=k;
		//printf("k1=%lf,k2=%lf,k3=%lf\n",k1,k2,k3);
		return 1;
	}
	return 0;
}
void parse(int a3,int a2,int a1,int a0){
	int p=1,q=1,p2,q2,gcd;
	k1=0,k2=0,k3=0;
	printf("The roots are: ");
	for(p=1;p<=(a0>0?a0:-a0);p++){
		if(a0%p==0){
			for(q=1;q<=(a3>0?a3:-a3);q++){
				if(a3%q==0){
					p2=p,q2=q;
					while((p2%=q2)&&(q2%=p2));
					gcd=p2+q2;
					p2=p/gcd,q2=q/gcd;
					if((1.0*p2/q2!=(k1>0?k1:-k1))&&(1.0*p2/q2!=(k2>0?k2:-k2))&&(1.0*p2/q2-k3!=(k3>0?k3:-k3))){
						root(a3,a2,a1,a0,p2,q2)?printf("%lf ",k):NULL;
						root(a3,a2,a1,a0,p2,-q2)?printf("%lf ",k):NULL;
					
					}
				}
			}
		}
	}
	
}
