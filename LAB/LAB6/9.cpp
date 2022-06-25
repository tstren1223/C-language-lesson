#include <stdio.h>
int main(){
	printf("------(A)------\nPlease input 3 numbers:");
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
	
	printf("------(B)------\n");
	char YN,ope; 
	int a1,b1;
	do{
	printf("Please input integer, the operator and integer:\n");
	scanf("%d %c %d",&a1,&ope,&b1);
	//scanf("%c",&ope);
	//scanf("%d",&b);
  	switch(ope){
  		case'+':
			printf("The result: %d + %d = %d\n",a1,b1,a1+b1);
			break;
		
		case'-':
			printf("The result: %d - %d = %d\n",a1,b1,a1-b1);
			break;
		
		case'*':
			printf("The result: %d * %d = %d\n",a1,b1,a1*b1);
			break;
		  
		case'/':
			if(b1==0){
				printf("The denominator can't be zero\n");
				break;
			}
			printf("The result: %d / %d = %lf\n",a1,b1,(double)a1/b1);
			break;
		default:
			printf("Error: incorrect operator!!!\n");
			break;
	  }
	  printf("Continue or not :");
	  scanf(" %c",&YN);
	}while(YN!='N'&&YN!='n');
	return 0;
}
