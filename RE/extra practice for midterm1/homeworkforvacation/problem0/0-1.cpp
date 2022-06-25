#include<stdio.h>
#include<time.h>
int way1(int x,int n){
	int a;int sum=0;
	printf("Please input the coefficients!\n");
	for(int i=n;i>=0;i--){
		scanf("%d",&a);
		for(int j=1;j<=i;j++)
			a*=x;
		sum+=a;
	}
	return sum;
}
int way2(int x,int n){
	int a;int sum=0;
	printf("Please input the coefficients!\n");
	for(int i=0;i<=n;i++){
		scanf("%d",&a);
		sum*=x;
		sum+=a;
	}
	return sum;
	
}
int main(){
	int x,a, n,t,t1,t2;
	int w1,w2;
	while(printf("Please input the max power of the function:\n"),scanf("%d",&n)!=EOF&&n>=0){
		printf("Please input the value of x!\n");
		scanf("%d",&x);
		if(!n){
			
			printf("Please input the coefficient!\n");
			scanf("%d",&a);
			t=time(NULL);
			w1=a;
			t1=time(NULL)-t;
			w2=a;
			t2=time(NULL)-t-t1;
			
		}
		else{
			t=time(NULL);
			w1=way1(x,n);
			t1=time(NULL)-t;
			w2=way2(x,n);
			t2=time(NULL)-t-t1;
		}
		
		printf("By way 1:\n%d\nBy way 2:\n%d\n",w1,w2); 
		printf("The time way1 wasted:\n%d\nThe time way2 wasted:\n%d\n",t1,t2);
	//diferrence is that way2 can be implemented more easily!
	} 
	return 0;
}
