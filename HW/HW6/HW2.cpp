#include <stdio.h>
int main (){
	double a,b,c,d;
	while(1){
	printf("Please input 3 numbers:");
	scanf("%lf %lf %lf",&a,&b,&c);
	while(!(a<=b&&a<=c&&b<=c)){
		if(!(a<=b)){
			if(!(b<=c)){
			d=c;
			c=a;
			a=d;
			//printf("4%lf %lf %lf\n",a,b,c);
			}
			else{
			d=a;
			a=b;
			b=d;
			//printf("2%lf %lf %lf\n",a,b,c);
			}
		}
		else if(!(b<=c)){
			d=b;
			b=c;
			c=d;
			//printf("4%lf %lf %lf\n",a,b,c);
		}
		else break;
	}
	printf("%lf %lf %lf\n",a,b,c);
	}
	return 0;
}
