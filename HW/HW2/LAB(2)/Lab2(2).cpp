#include <stdio.h>
int main(){
	double sum=0;
	int x;
	printf("Please input five numbers for parallel resistances:\n");
	scanf("%d",&x);
	sum+=1./x;
	scanf("%d",&x);
	sum+=1./x;
	scanf("%d",&x);
	sum+=1./x;
	scanf("%d",&x);
	sum+=1./x;
	scanf("%d",&x);
	sum+=1./x;
	printf("output is:%lf\n",1./sum);
	printf("Please input a,b,c,d,e!\n");
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	printf("x=%d y=%d\n",(c*e-b*f)/(a*e-b*d),(c*d-a*f)/(b*d-a*e));
	return 0;
}
