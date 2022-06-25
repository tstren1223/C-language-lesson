#include <stdio.h>
int main (){
	char YN,ope; int a,b;
	do{
	printf("Please input integer, the operator and integer:\n");
	scanf("%d %c %d",&a,&ope,&b);
	//scanf("%c",&ope);
	//scanf("%d",&b);
  	switch(ope){
  		case'+':
			printf("result:%d+%d=%d\n",a,b,a+b);
			break;
		
		case'-':
			printf("result:%d-%d=%d\n",a,b,a-b);
			break;
		
		case'*':
			printf("result:%d*%d=%d\n",a,b,a*b);
			break;
		  
		case'/':
			if(b==0)
				printf("The denominator can't be zero");
			printf("result:%d/%d=%lf\n",a,b,(double)a/b);
			break;
		default:
			printf("The operation should be +,-,* or /\n");
			break;
	  }
	  printf("Continue or not :");
	  scanf(" %c",&YN);
	}while(YN!='N'&&YN!='n');
	return 0;
}
