#include<stdio.h>
int main()
{
	int a,b,l,i,j=0;
	while(scanf("%d %d",&a,&b))
	{
		printf("  a b  0  1  2  3  4  5  6  7  8  9 10\n");
		for(l=1;l<=40;l++)
			printf("-");
		printf("\n");	
		for(i=0;i<=10;i++)
		{

			j==0?printf(" %2d |",i):NULL;
			i>=a&&j>=b?printf("%3d",i-a+j-b):0;
			i>=a&&j<b?printf("%3d",i-a+b-j):0;
			i<a&&j>=b?printf("%3d",a-i+j-b):0;
			i<a&&j<b?printf("%3d",a-i+b-j):0;
			//printf("i=%d,j=%d",i,j);
			j==10?j=0,printf("\n"):(j++,--i);
		}
	}
	return 0;
}
