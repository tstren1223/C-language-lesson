#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	
	int i,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0 ;
	double x,time=1E07;
	
	printf("seed:");
	scanf("%lf",&x);
	srand(x);

	printf("\n\n============Problem A============\n");
	
	for(i=0;i<1E7;i++)
	{
	
		switch(rand()%6+1)
		{
			case 1:
				d1++;
				break;
			case 2:
				d2++;
				break;
			case 3:
				d3++;
				break;
			case 4:
				d4++;
				break;
			case 5:
				d5++;
				break;
			case 6:
				d6++;
				break;
			default: ;
		}
	}

	printf("1:%8.6lf, 2:%8.6lf, 3:%8.6lf, \n4:%8.6lf, 5:%8.6lf, 6:%8.6lf", d1/time, d2/time, d3/time, d4/time, d5/time, d6/time);


	printf("\n\n============Problem B============\n");
		
		d2=0;
		d3=0;
		d4=0;
		d5=0; 
		d6=0;
		int    d7 = 0, d8 = 0, d9 = 0, d10 = 0, d11 = 0, d12 = 0, first, second;
		
		
	for(i=0; i<time; i++)
	{
		first = rand()%6+1;
		second = rand()%6+1;
		switch(first + second)
		{
			case 2:
				d2++;
				break;
			case 3:
				d3++;
				break;
			case 4:
				d4++;
				break;
			case 5:
				d5++;
				break;
			case 6:
				d6++;
				break;
			case 7:
				d7++;
				break;
			case 8:
				d8++;
				break;
			case 9:
				d9++;
				break;
			case 10:
				d10++;
				break;
			case 11:
				d11++;
				break;
			case 12:
				d12++;
				break;
		}
	}
	printf(" 2:%8.6lf, 3:%8.6lf, 4:%8.6lf,\n 5:%8.6lf, 6:%8.6lf, 7:%8.6lf,\n 8:%8.6lf, 9:%8.6lf,10:%8.6lf,\n11:%8.6lf,12:%8.6lf", d2/time, d3/time, d4/time, d5/time, d6/time, d7/time, d8/time, d9/time, d10/time, d11/time, d12/time);

	printf("\n\n============Problem C============\n");
	
	double y, pi; 
	
	
	double seed;
	const double mpy = 25173.0;
	const double inc = 13849.0;
	const double mod = 65535.0;
	
	printf("seed:");
	scanf("%lf",&seed);
	
	for(i=0; i<time; i++)
	{
		x=fmod(seed*mpy+inc,mod);
		seed=fmod(seed*mpy+inc,mod);
		x/=mod;
		y=fmod(seed*mpy+inc,mod);
		seed=fmod(seed*mpy+inc,mod);
		y/=mod;
		if((x-0.5)*(x-0.5)+(y-0.5)*(y-0.5)<0.25)
			pi++;
		
	}
	printf("pi/4: %lf, pi:%lf", pi/time, 4*pi/time);
	
	
	
	printf("\n\n============Problem D============\n");

	double x1,f;
	
	scanf("%lf", &x1);
	f=x1/3;

	do
	{
	
	f=f-(f*f-x1)/2/f;
	}
	while(f*f-x1>= 1E-6||f*f-x1<= -1E-6);
	
	printf("%.7lf", f);
	return 0;
}
