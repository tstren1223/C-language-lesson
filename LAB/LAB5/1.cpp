#include<stdio.h>

int main()
{
	
	long long n1=1,i1=1;
	double e=1;
	while(1./n1>1e-6)
	{
		e+=1./n1;
		i1++;
		n1*=i1;
	}
	printf("--------------------(a)--------------------\n當/n!<1E-06時，e=%.12lf\n",e);
	
	n1=1;
	i1=1;
	e=1;
	double x=1,y=2;
	while(y-x>1e-03)
	{
		e+=x;
		i1++;
		n1*=i1;
		y=x;
		x=1./n1;
	}
	printf("--------------------(b)--------------------\n當前後項的差小於0.001時，e=%.12lf\n",e);
	for(int t=0;t<=9;t++)
		for(int o=0;o<=9;o++)
			for(int g=0;g<=9;g++)
				for(int d=0;d<=9;d++){
					
					(4*(t*100+10*o+o)==g*1000+100*o+10*o+d)&&t!=o&&t!=g&&t!=d&&o!=g&&o!=d&&g!=d?printf("\nT=%d\nO=%d\nG=%d\nD=%d\n",t,o,g,d):NULL;
				}
	return 0;
} 
