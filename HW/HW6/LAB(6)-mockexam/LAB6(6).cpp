#include <stdio.h>
int main(){
	char con;
	int x;
	int a=0,b=0,c=0,d=0,e=0;
	do{
		printf("Please enter an non-negative integer >=100\n");
		scanf(" %d",&x);
		if(x>=0){
			x/=10;
			switch(x){
			case 10:
			case 9:
				a++;
				break;
			case 8:
				b++;
				break;
			case 7:
				c++;
				break;
			case 6:
				d++;
				break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
				e++;
				break;	
			}
		}
		printf("continue(y/n)?\n");
		//printf("a=%d,b=%d,c=%d,d=%d,e=%d",a,b,c,d,e);
		scanf(" %c",&con);
		
	}while(con!='n'&&con!='N');
	printf("\nA > ");
	for(int i=1;i<=a;i++)
		printf("*");
	printf("\nB > ");
	for(int i=1;i<=b;i++)
		printf("*");
	printf("\nC > ");
	for(int i=1;i<=c;i++)
		printf("*");
	printf("\nD > ");
	for(int i=1;i<=d;i++)
		printf("*");
	printf("\nE > ");
	for(int i=1;i<=e;i++)
		printf("*");
	return 0;
}
