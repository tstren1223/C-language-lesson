#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int main() { 
 
    int x,y,sed;
	printf("seed:");
	scanf("%d",&sed);     
	int RANGE = 1000;     
	srand (sed); 
	//method (a)     
	for(int i=1;i<=10;i++){
		x = rand()%RANGE;
		y=rand()%RANGE;     
		printf("A way:\n%lf\n",x/1000.0+y/1000000.0); 
	}
 	//method (b)     
	int  RAND_INV_RANGE=((int) ((RAND_MAX + 1) / (RANGE)));    
	 
	for(int j=1;j<=10;j++){
		do {         
			x = rand();     
			y = rand();
		} while (x >= RANGE * RAND_INV_RANGE||y >= RANGE * RAND_INV_RANGE);    
		x /= RAND_INV_RANGE; 
		y /= RAND_INV_RANGE; 		    
		printf("B way:\n%lf\n",x/1000.0+y/1000000.0);
	for(int l=1;l<=10;l++){
		RANGE=100;
		x = rand()%RANGE;
		RANGE=1000;
		do {           
			y = rand();
		} while (y >= RANGE * RAND_INV_RANGE);    
		y /= RAND_INV_RANGE; 
		printf("C way:\n%lf\n",y/1000.0+x/100000.0);
	}
	}
	return 0; 
	} 
