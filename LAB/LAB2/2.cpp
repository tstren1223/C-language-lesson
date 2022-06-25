#include<stdio.h>
#include<conio.h>
int main(){
	printf("(A)\nInput a,b,c,d,e and f:\n");
	float a,b,c,d,e,f;
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	printf("a is %f.\nb is %f.\nc is %f.\nd is %f.\ne is %f.\nf is %f.\nx is %f.\ny is %f.\n----------------------",a,b,c,d,e,f,(c*e-b*f)/(a*e-b*d),(a*f-c*d)/(a*e-b*d));
	printf("\n(B)\nInput a float value.\n");
	float g;
	int h;
	scanf("%f",&g);
	h=g;
	printf("The input value is %.3f\nThe whole part is %d\nhTe decimal(fraction) part is %.3f\n------------------",g,h,g-h);
	getch();
	return 0;
} 
