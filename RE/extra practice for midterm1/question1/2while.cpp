#include <stdio.h>
int main(){
	int x,sign=1;
	
	double sum=0,l=1,i=0,k=0;
	
	
	while(scanf("%d",&x)){
		sum+=sign*l;
		i+=2;
		sign*=-1;
		l=l*x*x/(i*(i+1));
		printf("\nl=%lf\nsum=%lf",l,sum);
		k++;
	}
	printf("sinx=%lf\n%lf times",sum,k);
	while(scanf("%d",&x)!=EOF){
		sum+=sign*l;
		i+=2;
		sign*=-1;
		l=l*x*x/(i*(i+1));
		printf("\nl=%lf\nsum=%lf",l,sum);
		k++;
	}
	scanf("%d",&i);
	printf("%d",EOF);
	return 0;
}
