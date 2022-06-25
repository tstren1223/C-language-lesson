#include<stdio.h>
#include <stdlib.h> 
int main (){
	//內容調點陣+舊版主控台 
	system("chcp 437 && cls");
	int a,s=0;
	scanf("%d",&a);
	for(int i=10;i<=a;++i){
		s=s+2*i;
	}
	printf("%d\n",s);
	s=0;
	float s1=0;
	double s2=0;
	for(int i=1;i<=101;i+=2){
		s1=s1+1./i;
	}
	printf("%f\n",s1);
	s1=0;
	double b=1;
	for(int i=1;i<=a;i++){
		b*=i;
	s2+=1.0/b;
	}
	printf("%lf\n",s2);
	s2=0;
	b=0;
	for(int i=1,sign=1;i<=a;i++){
		s=s+i*sign;
		sign=-sign;
	}
	printf("%d\n",s);
	s=0;
	for(int i=1;i<=a;i++){
		b+=i;
		s=s+b;
	}
	printf("%d\n",s);
	printf("%c",201);
	for(int i=0;i<35;i++)
		printf("%c",205);
	printf("%c\n",187);
	printf("%c",186);
	for(int i=0;i<=123;i++){
		i==7?printf("%3d   %3c\n%c",i,186,186):i==8?printf("%3d   %3c",i,179):i==10?printf("%3d   %3c",i,179):i==12?printf("%3d   %3c",i,179):i==13?printf("%3d   %3c",i,179):i%4==3?printf("%3d%3c%3c\n%c",i,i,186,186):printf("%3d%3c%3c",i,i,179);
	}
	for(int i=124;i<=127;i++)
	{
		i%4==3?printf("%3d%3c%3c\n",i,i,186):printf("%3d%3c%3c",i,i,179);
	}
	printf("%c",200);
	for(int i=0;i<35;i++)
		printf("%c",205);
	printf("%c",188);
	return 0;
}
