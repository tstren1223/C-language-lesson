#include<stdio.h>
#include<conio.h>
int main(){
	int count=0;
	printf("Press any key until press return: ");
	while(getche()!='\r')//using getche instead of scanf which stores the value
		count++;
	printf("\nTotal typing %d characters\n",count);
	return 0;
}
/*
#include<stdio.h>
#include<conio.h>
int main(){
	int count=-1;
	char ch='a';//initialization
	printf("Press any key until press return: ");
	while(ch!='\r'){
		count++;
		ch=getche();//input
	}
	printf("\nTotal typing %d characters\n",count);
	return 0;
}
*/
/*
#include<stdio.h>
#include<conio.h>
int main(){
	int count=0;
	char ch;
	printf("Press any key until press return: ");
	scanf(" %c",&ch);//add space in front of %c
	while(ch!='q'){
		count++;
		scanf(" %c",&ch);
	}
	printf("\nTotal typing %d characters\n",count);
	return 0;
}
*/
