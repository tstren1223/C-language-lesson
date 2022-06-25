#include<stdio.h>
//s for ascending o for the position of an array
void comb(int n,int k,int a[10000],int o,int s){
	if(o==k+1&&n&&k){
		for(int i=1;i<=k;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	else
		for(int i=s+1;i<=n;i++){
			
			a[o]=i;
			comb(n,k,a,o+1,i);	
			
		}
}
int main(){
	int n,k,p=1;
	int a[10000]={0};
	while(printf("case %d\n",p),scanf("%d%d",&n,&k)!=EOF){
		comb(n,k,a,1,0);
		printf("\n");
		p++;	
	}
	return 0;
}
