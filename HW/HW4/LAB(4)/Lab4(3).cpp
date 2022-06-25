#include<stdio.h>
int main(){
	float i=2,pi=3,sign=1;
	while(4./(i*(i+1)*(i+2))>1e-12){
		pi+=4./(i*(i+1)*(i+2))*sign;
		i+=2;
		sign*=-1;
	}
	printf("%f",pi);
	int x=1,sum,max=0;
	while (x!=0){
		scanf("%d",&x);
		sum+=x;
		sum<=0?sum=0:sum>=max?max=sum:NULL;	
	}
	printf("%d",max);
	return 0;
} 
