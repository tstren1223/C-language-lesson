#include <stdio.h>
int main(){
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
