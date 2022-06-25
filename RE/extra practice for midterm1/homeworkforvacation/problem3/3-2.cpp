#include<stdio.h>
//num for the number have been choosed
//n for the considered number
//o for num<=o
//k for the original considered
void sub(int a[33],int b[33],int num,int n,int o,int k){
	if(num==o){
		printf("{");
		int c=0;
		for(int i=1;i<=k;i++){
			if(b[i]){
				c++;
				c==o?printf("%d",a[i]):printf("%d,",a[i]);
			}
		}
		printf("}\n");
	}
	else if(n>0){
		b[n]=1;
		sub(a,b,num+1,n-1,o,k);
		if(num){
			b[n]=0;
			sub(a,b,num,n-1,o,k);
		}
		b[n]=0;
	}
	

}
int main(){
	int a[33];
	int b[33]={0};//for choose
	for(int i=1;i<=32;i++)
		a[i]=i;
	int p=1,num;
	while(printf("case %d\n",p),scanf("%d",&num)!=EOF){
		for(int i=0;i<=num;i++){
			if(i==0)
				sub(a,b,0,0,0,0);
			for(int j=1;j<=i;j++){
				sub(a,b,0,i,j,num);
				}
		}
		
		printf("\n");
		p++;
	}
	return 0;
}
