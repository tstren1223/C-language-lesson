#include<stdio.h>
#include<conio.h>
int main(){
	const float PI=3.14159;
	float r=6.75;
	printf("(A)\nThe diameter with a radius of 6.75 is %10.5f.\n",2*r);
	printf("The circumference with a radius of 6.75 is %10.5f.\n",2*r*PI);
	printf("The arear with a radius of 6.75 is %10.5f.\n",r*r*PI);
	printf("---------------------\n(B)\nPlease enter an integer between 7 and 9 digits long:\n");
	int a;
	scanf("%d",&a);
	printf("The third-rightmost digit of the input data is %d\n",a%1000/100);
	printf("The input data with commas between every third digit is %d,%d%d%d,%d%d%d\n---------------------\n",a/1000000,a%1000000/100000,a%100000/10000,a%10000/1000,a%1000/100,a%100/10,a%10);
	getch();
	return 0;
} 
