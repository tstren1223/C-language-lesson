#include<stdio.h>
#include <stdlib.h> 
int main (){
	system("chcp 437 && cls");
	printf("---------Part1--------\n-----Method A:-----\nInput n: ");
	double a0,x,n,s1=0,v=1;
	scanf("%lf",&n);
	printf("Input x: ");
	scanf("%lf",&x);
	printf("Input coefficients: ");
	for(int a=0;a<=n;a++){
		scanf("%lf",&a0);
		for(int e=n;e>0;e--){
			v*=x;
		}
		s1=v*a0+s1;
		v=1;
	}
	printf("Answer is:%lf\n-----Method B:-----\nInput n: ",s1);
	s1=0;	
	scanf("%lf",&n);
	printf("Input x: ");
	scanf("%lf",&x);
	printf("Input coefficients: ");
		for(int a=0;a<=n;a++){
		scanf("%lf",&a0);
		for(int e=1;e<=a;e+=a){
			s1=s1*x;
		}
		s1+=a0;
	}
	printf("Answer is:%lf\n--------Part2--------\n",s1);
	printf("%c",201);
	for(int i=0;i<35;i++)
		printf("%c",205);
	printf("%c\n",187);
	printf("%c",186);
	for(int i=32;i<=123;i++){
		i%4==3?printf("%3d%3c%3c\n%c",i,i,186,186):printf("%3d%3c%3c",i,i,179);
	}
	for(int i=124;i<=127;i+=4)
		printf("%3d%3c%3c%3d%3c%3c%3d%3c%3c%3d%3c%3c\n",i,i,179,i+1,i+1,179,i+2,i+2,179,i+3,i+3,186);
	printf("%c",200);
	for(int i=0;i<35;i++)
		printf("%c",205);
	printf("%c",188);
	return 0;
}
