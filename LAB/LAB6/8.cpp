#include <stdio.h>
int main(){
	int a1;
	long long b1;
	int sel,con=1;
	printf("------(A)------\n");
	do{
		printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4.Exit\nPlease input item(1~4): ");
		scanf(" %d",&sel);
		switch(sel){
			case 1:
				printf("Input the n for n!: ");
				scanf("%d",&a1);
				b1=1;
				for(int k=1;k<=a1;k++){
					b1*=k;
					//printf("%d ",b1);
				}
				printf("%d! = %lld\n",a1,b1);
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
	printf("------(B)------\nplease input n: ");
	double h1,c,sum,n;
	int a2=0,b2=10;
	
	while(scanf("%lf",&n)!=EOF){
	h1=10/n;
	c=h1;
	sum=0;
	while(b2-c>=h1){
		sum+=2*(8*c*c*c+3*c*c+6*c+10);
		c+=h1;
	}
	//printf("%lf\n",sum);
	sum+=8*(a2*a2*a2+b2*b2*b2)+3*(a2*a2+b2*b2)+6*(a2+b2)+20;
	//printf("%lf\n",sum);
	printf("Trapezoidal Rule: %.12lf\n",sum*h1*0.5);
	sum=0;
	c=a2;
	while(c<=b2-h1){
		sum+=(8*c*c*c+3*c*c+6*c+10)*h1;
		c+=h1;
	}
	printf("Rectangular Rule: %.12lf\nplease input n:",sum);
	}
	printf("------(c)------\nPlease input coordinate of a point(x,y):");
	double k,l;
	while(scanf(" %lf %lf",&k,&l)){
		if(k==0){
			if(l==0){
				printf("(%.0lf,%.0lf)is the origin.\n",k,l);
				
			}
			else{
				printf("(%.0lf,%.0lf)is on the y-axis.\n",k,l);
				
			}
		}
		else if(l==0){
			if(k==0){
				printf("(%.0lf,%.0lf)is the origin.\n",k,l);
				
			}
			else{
				printf("(%.0lf,%.0lf)is on the x-axis.\n",k,l);
				
			}
		}
		else if(k>0){
			if(l>0){
				printf("(%.0lf,%.0lf)is in the first quadrant.\n",k,l);
				
			}
			else{
				printf("(%.0lf,%.0lf)is in the forth quadrant.\n",k,l);
				
			}
		}
		else{
			if(l>0){
				printf("(%.0lf,%.0lf)is in the second quadrant.\n",k,l);
				
			}
			else{
				printf("(%.0lf,.0%lf)is in the third quadrant.\n",k,l);
			}
		}
	printf("Please input coordinate of a point(x,y):");
	}
	return 0;
}
