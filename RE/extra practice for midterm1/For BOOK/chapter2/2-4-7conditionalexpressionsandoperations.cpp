#include <stdio.h>
#include <conio.h>
int main(){
	int max,min,abs;
	int i=-3,j=-5;
	
	max=(i>j)?i:j;
	min=(i<j)?i:j;
	abs=(i<0)?-i:i;
	printf("%d and %d: the max is %d\n",i,j,max);
	printf("%d and %d: the min is %d\n",i,j,min);
	printf("The absolute value of %d is %d\n",i,abs);
	getch();
	
	int a=1,b=2;
	printf("%d,a=%d,b=%d\n",++a<<2+b*(2+3/2*4)*5%4,a,b);
	printf("%d\n",1*2+3*4/5>6*7%8-~9);
	printf("%d\n",6*7%8-~9);
	printf("%d\n",!1&&2+3*4+~5*6||7<8*9);
	printf("%d\n",!1&&2+3*4+~5*6||7);
	printf("%d\n",3*4+~5*6||7<8*9);
	return 0;
}
