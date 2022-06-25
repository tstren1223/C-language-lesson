#include<stdio.h>
#include<conio.h>
int main(){
	char name[20];
	printf("\nPlease enter your name:  ");
	scanf(" %s",name);
	printf("Your name is %s\n",name);//即使%s %s依舊沒用 
	scanf(" %s",name);//此次不用再次輸入,因為緩衝區尚有字故name=緩衝區剩餘的字 
	printf("Your name is %s\n",name);
	return 0;
}
