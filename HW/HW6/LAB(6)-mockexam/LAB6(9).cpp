#include <stdio.h>
int main(){
	double x,y;
	printf("------(A)------\nPlease input coordinate of a point(x,y):");
	while(scanf("%lf %lf",&x,&y)!=EOF){
		if(x==0){
			if(y==0){
				printf("(%.0lf,%.0lf)is the origin.\n",x,y);
				
			}
			else{
				printf("(%.0lf,%.0lf)is on the y-axis.\n",x,y);
				
			}
		}
		else if(y==0){
			if(x==0){
				printf("(%.0lf,%.0lf)is the origin.\n",x,y);
				
			}
			else{
				printf("(%.0lf,%.0lf)is on the x-axis.\n",x,y);
				
			}
		}
		else if(x>0){
			if(y>0){
				printf("(%.0lf,%.0lf)is in the first quadrant.\n",x,y);
				
			}
			else{
				printf("(%.0lf,%.0lf)is in the forth quadrant.\n",x,y);
				
			}
		}
		else{
			if(y>0){
				printf("(%.0lf,%.0lf)is in the second quadrant.\n",x,y);
				
			}
			else{
				printf("(%.0lf,.0%lf)is in the third quadrant.\n",x,y);
			}
		}
	printf("Please input coordinate of a point(x,y):");
	}
	printf("------(B)------\nPlease input 3 numbers:");
	int a,b,c,d;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
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
	printf("The result in ascending order: %d %d %d\n",a,b,c);
	
	printf("Please input 3 numbers:");
	}
	printf("------(C)------\n");
	int a1,b1=0;
	int sel,con=1;
	
	do{
		printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4.Exit\nPlease input item(1~4): ");
		scanf("%d",&sel);
		switch(sel){
			case 1:
				printf("Input the n for n!: ");
				scanf("%d",&a1);
				b1=1;
				for(int k=1;k<=a1;k++){
					b1*=k;
					//printf("%d ",b1);
				}
				printf("%d! = %d\n",a1,b1);
				break;
			case 2:
				printf("Please input x(x>0): ");
				scanf("%d",&a1);
				b1=0;
				for(int i=1;i<=a1;i++){
					if(a1%i==0)
						b1++;
				}
				if(b1==2){
					printf("Prime number.\n");
				}
				else
					printf("Not a prime number.\n");
				break;
			case 3:
				printf("Please input a num: ");
				scanf("%d",&a1);
				if(a1%2==1)
					printf("Odd number.\n");
				else
					printf("Even number.\n");
				break;
			case 4:
				con=0;
				break;
			default:
				printf("You enter a wrong number!\n");
				break;
		}
		
	}while(con);
	return 0;
}
