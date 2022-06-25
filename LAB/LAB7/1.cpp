#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	printf("------1-A------\ninput positive number x:");
	int k;
	double gue;
	scanf("%d",&k);
	gue=k;
	do{
		gue=gue-(gue*gue-k)/(2*gue);
	}while(gue-(gue-(gue*gue-k)/(2*gue))>1e-8);
	
	
	printf("the square root is %lf\n-------1-B------\n",gue);
	int cho,a=0,b=0,c=0,d=0,e=0,f=0;
	srand(time(NULL));
	for(int i=1;i<=5000;i++){
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
	printf("1=%lf, 2=%lf, 3=%lf, 4=%lf, 5=%lf, 6=%lf\n------1-C------\n",a/5000.0,b/5000.0,c/5000.0,d/5000.0,e/5000.0,f/5000.0);
	
	
	double a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0;
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
	printf("1=%lf\n2=%lf\n3=%lf\n4=%lf\n5=%lf\n6=%lf\n7=%lf\n8=%lf\n9=%lf\n10=%lf\n11=%lf\n12=%lf\n",a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);
	return 0;
}
