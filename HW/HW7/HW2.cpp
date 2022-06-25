#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
	int cho;
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
	printf("2=%lf,3=%lf,4=%lf,5=%lf,6=%lf,7=%lf,8=%lf,9=%lf,10=%lf,11=%lf,12=%lf\n7 is the most likely thrown.",a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);
	return 0;
}
