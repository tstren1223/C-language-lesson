#include <stdio.h>
int main(){
		int n,i,j;
		double suma,k,add1,add2;
		printf("Please input n: ");
		while(scanf("%d",&n)!=EOF)
		{
			add1=0,add2=0;
			k=10./n;
			for(i=1;i<=n-1;i++){
				add1+=8*(k*i)*(k*i)*(k*i)+3*(k*i)*(k*i)+6*(k*i)+10;
				//printf("%.15lf\n",k*i);
				//printf("sum=%.15lf\n",2*add1);
			}
			suma=k/2*(8380+add1*2);
			for(j=0;j<n;j++){
				add2+=8*(k*j)*(k*j)*(k*j)+3*(k*j)*(k*j)+6*(k*j)+10;
				//printf("sum=%.15lf,k=%.15lf\n",k*add2,k*j);
			}
			printf("Trapezoidal Rulrs: %0.14lf\n",k*suma);
			printf("Rectangular Rules: %0.14lf\n\n",k*add2);
			printf("Please input n: ");
		}
	return 0;
}
