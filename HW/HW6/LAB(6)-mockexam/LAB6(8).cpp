#include <stdio.h>
int main(){
	printf("------(A)------\n");
	char YN,ope; int a,b;
	do{
	printf("Please input integer, the operator and integer:\n");
	scanf("%d %c %d",&a,&ope,&b);
	//scanf("%c",&ope);
	//scanf("%d",&b);
  	switch(ope){
  		case'+':
			printf("The result: %d + %d = %d\n",a,b,a+b);
			break;
		
		case'-':
			printf("The result: %d - %d = %d\n",a,b,a-b);
			break;
		
		case'*':
			printf("The result: %d * %d = %d\n",a,b,a*b);
			break;
		  
		case'/':
			if(b==0){
				printf("The denominator can't be zero\n");
				break;
			}
			printf("The result: %d / %d = %lf\n",a,b,(double)a/b);
			break;
		default:
			printf("Error: incorrect operator!!!\n");
			break;
	  }
	  printf("Continue or not :");
	  scanf(" %c",&YN);
	}while(YN!='N'&&YN!='n');
	printf("------(B)------\nplease input h: ");
	double h1,sum;
	int a1=0,b1=10,c=1;
	
	while(scanf("%lf",&h1)){
	c=1;
	sum=0;
	//printf("c=%lf b=%lf h1=%lf",c,b1,h1);
	while(b1-c*h1>0){
		sum+=2*(8*(c*h1)*(c*h1)*(c*h1)+3*(c*h1)*(c*h1)+6*(c*h1)+10);
		c++;
		//printf("c=%.15lf\n",c);
		//printf("sum=%.15lf\n",sum);
	}
	//printf("%lf\n",sum);
	sum+=8*(a1*a1*a1+b1*b1*b1)+3*(a1*a1+b1*b1)+6*(a1+b1)+20;
	//printf("%lf\n",sum);
	printf("Trapezoidal Rule: %.12lf\n",sum*h1*0.5);
	sum=0;
	c=a1;
	while(b1-c*h1>0){
		sum+=(8*(c*h1)*(c*h1)*(c*h1)+3*(c*h1)*(c*h1)+6*(c*h1)+10);
		//printf("sum=%.15lf,c=%.15lf\n",sum*h1,c*h1);
		c++;
		//printf("sum=%.15lf,c=%.15lf\n",sum,c*h1);
	}
	printf("Rectangular Rule: %.12lf\nplease input h:",sum);
	}
	return 0;
}
