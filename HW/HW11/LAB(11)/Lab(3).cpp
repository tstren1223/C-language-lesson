#include<stdio.h>
#include<math.h>
int x[21]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
double y[21];
int IY[21];
int main()
{
	int i,j;
	double ymax,ymin;
	for(i=0;i<21;i++)
		y[i]=cos(M_PI*x[i]/10.);
	ymax=y[0];
	for(i=1;i<11;i++)
	{
		if(ymax<y[i])
			ymax=y[i];
	}
	ymin=y[0];
	for(i=1;i<21;i++)
	{
		if(ymin>y[i])
			ymin=y[i];
	}
	for(i=0;i<21;i++)
		IY[i]=ceil(80*(y[i]-ymin)/(ymax-ymin));
	for(i=0;i<21;i++)
	{
		for(j=0;j<83;j++)
		{
			if(j==0||j==82)
				printf("");
			else if(j==IY[i]+1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
