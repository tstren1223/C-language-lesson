#include<stdio.h>
double NT(int x){
	double a=x,b=0.5*(a+x/a);
	while((b>a)?b-a>1e-6:a-b>1e-6){
		a=b;
		b=0.5*(a+x/a);
		//printf("a=%lf,b=%lf\n",a,b);
	}
	return b;
}
int main(){
	int x;
	printf("Please input an integer!\n");
	while(scanf("%d",&x)!=EOF){
		printf("The rough value is %lf\n",NT(x));
		printf("Please input an integer!\n");
	}
	return 0;
}
