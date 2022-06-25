#include<stdio.h>
#include<conio.h>
int main(){
	char ch1,ch2,ch3;
	printf("\nPress any key to continue ");
	ch3=getch();
	printf("\nType any character ");
	ch1=getche();
	printf("\nType any character ");
	ch2=getchar();
	printf("You have typed the following characters: ");
	putch(ch3);
	putch(ch1);
	putch(ch2);
	printf("\nType any character use getch()!! ");
	putch(getch());
	return 0;
}
