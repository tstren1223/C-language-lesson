#include<stdio.h>
int main(){
	double f=1.0;
	int i,n,e=0;
	printf("Input a positive integer: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f*=i;
		while(f>=10.0){//this is a very important skill!
			f/=10.0;
			e++;
		}
	}
	printf("%d! = %16.14lfE+%d\n",n,f,e);
	return 0;
}
