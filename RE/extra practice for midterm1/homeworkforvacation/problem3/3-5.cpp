#include<stdio.h>
void parti(int n,int *a,int s,int po,int sum){
	if(n==sum){
		for(int i=1;i<po;i++){
		
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	else if(n>sum){
		for(int i=s;i>=1;i--){
			if(sum+i<=n){
				a[po]=i;
				parti(n,a,i,po+1,sum+i);
					
			}
		}
	}
}
int main(){
	int *a,n,p=1;
	while(printf("case %d:\n",p),scanf("%d",&n)){
		p++;
		a=new int [n+1];
		parti(n,a,n,1,0);
		printf("\n");
	}
	return 0;
}
