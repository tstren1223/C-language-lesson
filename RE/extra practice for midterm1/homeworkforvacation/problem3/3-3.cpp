#include<stdio.h>
#include<stdlib.h>
long long fab(long long table[1000],long long a[2][2],int n,int *p){
	if(table[n]){
 		return table[n];
	}
	else{
		int l=1;
		while(table[l]){
			l++;
		}
		long long su1=table[l-3],su2=table[l-2],su3=table[l-2],su4=table[l-1];
		long long a1,a2,a3,a4;
		for(int i=1;i<=n-l+1;i++){
			a1=su1*a[0][0]+su2*a[1][0];
			a2=su1*a[0][1]+su2*a[1][1];
			a3=su3*a[0][0]+su4*a[1][0];
			a4=su3*a[0][1]+su4*a[1][1];
			su1=a1;
			su2=a2;
			su3=a3;
			su4=a4;
			table[l+i-1]=a4;
			if(table[l+i-1]>=INT_MAX){
				(*p)=l+i-1;
				break;
			}
		}
		
		return table[n];
	}
 }
 int main(){
 	long long table[1000]={0};
 	long long a[2][2]={0,1,1,1};
 	table[0]=0,table[1]=1,table[2]=1;
 	int p=1,num;
 	long long k;
	 int q;
 	while(printf("case %d:\n",p),scanf("%d",&num)){
 		k=fab(table,a,num,&q);
 		if(num>=q)
 			printf("overflow!");
		 else
		 	printf("%lld",k);
		printf("\n");
	 	p++;
	 }
	
 }
