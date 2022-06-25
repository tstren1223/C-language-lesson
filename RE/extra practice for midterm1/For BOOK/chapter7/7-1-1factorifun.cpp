#include<stdio.h>
double fact(int n){
	int i;
	double f=1;
	for(i=1;i<=n;i++)
		f*=i;
	return f;
}
double fact1 (){
	int i,n;
	double f=1;
	printf("Enter one positive integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f*=i;
	}
	printf("The factorial  of %d = ",n);
	return f;
}
int main(){
	int n;
	double f;
	printf("Enter one positive integer:");
	scanf("%d",&n);
	f=fact(n);
	printf("The factorial  of %d = %lf\n",n,f);
	f=fact1();
	printf("%lf\n",f);
	return 0;
}
