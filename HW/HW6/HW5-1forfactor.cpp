#include <stdio.h>
int main (){
	int a,b=0;
	int sel,con=1;
	
	do{
		printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4.Exit\n");
		scanf("%d",&sel);
		switch(sel){
			case 1:
				printf("Please enter a number!");
				scanf("%d",&a);
				printf("Factors:");
				for(int i=1;i<=a;i++){
					if(a%i==0)
						printf("%d ",i);
				}
				break;
			case 2:
				printf("Please enter a number!");
				scanf("%d",&a);
				b=0;
				for(int i=1;i<=a;i++){
					if(a%i==0)
						b++;
				}
				if(b==2){
					printf("This is a prime number.\n");
				}
				else
					printf("This is not a prime number.\n");
				break;
			case 3:
				printf("Please enter a number!");
				scanf("%d",&a);
				if(a%2==1)
					printf("This is an odd number.\n");
				else
					printf("This is an even number.\n");
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
