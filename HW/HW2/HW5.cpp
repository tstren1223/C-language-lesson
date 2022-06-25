#include<stdio.h>
#include<conio.h>
int main(){
	printf("Please enter 5 resistences.\n");
	float a,b,c,d,e;
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	printf("The effective resistence of these 5 resistences is %f.\n",1/(1/a+1/b+1/c+1/d+1/e));
	getch();
	return 0;
} 
