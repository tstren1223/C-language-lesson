#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
	int cho,a=0,b=0,c=0,d=0,e=0,f=0;
	srand(time(NULL));
	for(int i=1;i<=6000;i++){
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
	printf("1=%lf,2=%lf,3=%lf,4=%lf,5=%lf,6=%lf",a/6000.0,b/6000.0,c/6000.0,d/6000.0,e/6000.0,f/6000.0);
	return 0;
}
