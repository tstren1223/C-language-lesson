#include<stdio.h>
int in=0;
void ring(int n,int*x,int k){//k for the number of all numbers you put 
	int flag=1;
	if(k<n){
		
		/*for(int i=k-1;i<=n-1;i++){
			x[i]=0;
		}*/
		for(int i=2;i<=n;i++){
			flag=1;
		//	printf("%d\n",i+x[k-2]);
			for(int j=2;j<i+x[k-2];j++){
				(i+x[k-2])%j==0?flag=0:NULL;
			}
		//	printf("%d\n",i);
			for(int p=0;p<k-1;p++){
				i==x[p]?flag=0:NULL;
			}
			
		/*	for(int i=0;i<n;i++){
				printf("%d ",x[i]);
			}
			printf("\n");*/
			if(flag){
				x[k-1]=i;
				ring(n,x,k+1);
			}
		}
	}
	else if(k==n){
		for(int i=2;i<=n;i++){
			flag=1;
			for(int j=2;j<i+x[k-2];j++){
				(i+x[k-2])%j==0?flag=0:NULL;
			}
			for(int j=2;j<(i+x[0]);j++){
				(i+x[0])%j==0?flag=0:NULL;
			}
			//printf("%d\n",i+x[k-2]);
			/*for(int i=0;i<n;i++){
					printf("%d ",x[i]);
			}
			printf("\n");*/
			for(int p=0;p<k-1;p++){
			i==x[p]?flag=0:NULL;
			}
			if(flag){
				x[k-1]=i;
				for(int i=0;i<n;i++){
					printf("%d ",x[i]);
				}
				printf("\n");
			in++;
			}
			
				
		}
	}
}
int main(){
	int x[16]={0};
	int n;
	printf("Please input a even number 0<n<=16\n");
	while(scanf("%d",&n)!=EOF){
		x[0]=1;
		in=0;
		ring(n,x,2);
		printf("Number:%d\n",in);
	}
	return 0;
}
