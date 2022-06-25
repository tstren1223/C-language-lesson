#include<stdio.h>
void swap(int *a,int*b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int x,y;
	printf("Enter two integers:");
	scanf("%d %d",&x,&y);
	printf("Before x=%d,y=%d\n",x,y);
	swap(&x,&y);
	printf("After x=%d,y=%d\n",x,y);
	return 0;
}
