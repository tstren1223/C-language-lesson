#include<stdio.h>
int kns(int *x,int *w,int n,int g){
	if(w[n-1]>g)
		kns(x,w,n-1,g);
	else if(w[n-1]<=g&&n>0){
		int a,b;
		a=x[n-1]+kns(x,w,n-1,g-w[n-1]);
		b=kns(x,w,n-1,g);
		if(a>b)
			return a;
		return b;
	}
	else
		return 0;
}
int main(){
	int x[4]={15,10,9,5};
	int w[4]={1,5,3,4}; 
	int n,g;
	printf("Please input n:");
	scanf("%d",&n);
	printf("Please input g:");
	scanf("%d",&g);
	printf("The result is %d\n",kns(x,w,n,g));
	return 0;
}
