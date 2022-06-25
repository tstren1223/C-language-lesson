#include<stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k,n,a,b,c;
	printf("input n: ");
	while(scanf("%d",&n))
	{
		for(k=1;k<=n;k++)
		{
			c=0;
			for(i=1;i<=abs((n-1)/2+1-k);i++)
				printf(" ");
			b=(k-((n/2)+1)<=0)?k:n+1-k;
			//printf("k=%d,b=%d",k,b);
			for(j=1;j<=b;j++)
			{
				(k<=(n+1)/2)?a=(j<=(k+1)/2)?64+j:(64+b/2-c):a=(j<=(n+1)/2-(k)/2)?64+j:64+b/2-c;
				(j>(k+1)/2&&k<=(n+1)/2)?c++:NULL;
				(j>(n+1)/2-(k)/2&&k>(n+1)/2)?c++:NULL;
				//printf("c=%d,j=%d,a=%d",c,j,a);
				printf("%c ",a);
				
			}
			printf("\n");
		}
	}
}
