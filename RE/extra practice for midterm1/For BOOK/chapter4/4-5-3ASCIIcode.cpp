#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	do{
		ch=getch();
		printf("The key pressed is %c; ",ch);
		printf("ASCII value is %d\n",ch);
	}
	while(ch !='Q'&&ch!='q');
	return 0;
}
