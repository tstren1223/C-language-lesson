#include <stdio.h>
int main (){
	double x,y;
	while(1){
		printf("\nPlease input x and y:");
		scanf("%lf %lf",&x,&y);
		if(x==0){
			if(y==0){
				printf("(%lf,%lf)is the origin.",x,y);
				
			}
			else{
				printf("(%lf,%lf)is on the y-axis.",x,y);
				
			}
		}
		else if(y==0){
			if(x==0){
				printf("(%lf,%lf)is the origin.",x,y);
				
			}
			else{
				printf("(%lf,%lf)is on the x-axis.",x,y);
				
			}
		}
		else if(x>0){
			if(y>0){
				printf("(%lf,%lf)is in the first quadrant.",x,y);
				
			}
			else{
				printf("(%lf,%lf)is in the forth quadrant.",x,y);
				
			}
		}
		else{
			if(y>0){
				printf("(%lf,%lf)is in the second quadrant.",x,y);
				
			}
			else{
				printf("(%lf,%lf)is in the third quadrant.",x,y);
			}
		}
	
	}
	return 0;
}
