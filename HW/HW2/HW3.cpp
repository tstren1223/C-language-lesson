#include<stdio.h>
#include<conio.h>
int main(){
	printf("Please enter an integer between 7 and 9 digits long.\n");
	int a;
	scanf("%d",&a);
	printf("The third-rightmost digit of the input data is %d\n",a%1000/100);
	printf("The input data with commas between every third digit is %d,%d,%d\n",a/1000000,a%1000000/1000,a%1000);
	getch();
	return 0;
} 
