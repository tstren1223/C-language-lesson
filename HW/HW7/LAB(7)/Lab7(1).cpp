#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <cmath>
int main (){
	int sed,cho,a=0,b=0,c=0,d=0,e=0,f=0;
	printf("seed:");
	scanf("%d",&sed);
	srand(sed);
	for(int i=1;i<=10000000;i++){
		cho=(int)(rand()/(RAND_MAX+1.0)*(6))+1;
		switch(cho){
			case 1:
				a++;
				break;
			case 2:
				b++;
				break;
			case 3:
				c++;
				break;
			case 4:
				d++;
				break;
			case 5:
				e++;
				break;
			case 6:
				f++;
				break;
			
		}
	}
	printf("--------Problem A--------\n1=%lf, 2=%lf, 3=%lf\n4=%lf, 5=%lf, 6=%lf\n--------Prolbem B---------\n",a/10000000.0,b/10000000.0,c/10000000.0,d/10000000.0,e/10000000.0,f/10000000.0);
	double a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0;
	srand(time(NULL));
	for(int i=1;i<=10000;i++){
		cho=(int)(rand()/(RAND_MAX+1.0)*(6))+1+(int)(rand()/(RAND_MAX+1.0)*(6))+1;
		switch(cho){
			case 2:
				a2++;
				break;
			case 3:
				a3++;
				break;
			case 4:
				a4++;
				break;
			case 5:
				a5++;
				break;
			case 6:
				a6++;
				break;
			case 7:
				a7++;
				break;
			case 8:
				a8++;
				break;
			case 9:
				a9++;
				break;
			case 10:
				a10++;
				break;
			case 11:
				a11++;
				break;
			case 12:
				a12++;
				break;
			
		}
	}
	a2/=10000.0;
	a3/=10000.0;
	a4/=10000.0;
	a5/=10000.0;
	a6/=10000.0;
	a7/=10000.0;
	a8/=10000.0;
	a9/=10000.0;
	a10/=10000.0;
	a11/=10000.0;
	a12/=10000.0;
	printf(" 2=%lf, 3=%lf, 4=%lf\n 5=%lf, 6=%lf, 7=%lf\n 8=%lf, 9=%lf,10=%lf\n11=%lf,12=%lf\n--------Problem C--------\nseed:",a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);
	int j=0;
	double k1;
	scanf("%lf",&k1);
	double seed1=k1,seed2;
	const double  mpy = 25173.0;
	const double  inc =13849.0;
	const double  mod =65535.0;
	for(int i=1;i<=10000000;i++){
	seed1=fmod(seed1 *mpy + inc, mod);
	seed2=fmod(seed1 *mpy + inc, mod);
	(0.5-(seed1)/(mod))*(0.5-(seed1)/(mod))+(0.5-(seed2)/(mod))*(0.5-(seed2)/(mod))<=0.25?j++:NULL;
	seed1=seed2;
	}
	printf("pi/4:%lf, pi:%lf\n--------Problem D--------\nInput a positive integer:",j/10000000.0,j*4/10000000.0);
	int k,fla,l;
	double gue;
	scanf("%d",&k);
	gue=k;
	do{
		gue=gue-(gue*gue-k)/(2*gue);
		gue*gue<k?fla=1:fla=0;
		l++;
	}while(fla==1?-(gue*gue-k)>1e-6:(gue*gue-k)>1e-6);
	printf("The square root of %d is %.7lf",k,gue);
	return 0;
}
