#include<stdio.h>
int main()
{

// Part (A)
	float r;
	float area;
	float Math_PI=3.14159;
	int w1,h1,w2,h2;
	printf("Please input the radius:");
	scanf("%f",&r);
	area=Math_PI*r*r;
	printf("The area of circle is %f\n\n",area);
	printf("Please input the width and height:");
	scanf("%d %d",&w1,&h1);
	printf("The area of a rectangle is %d\n",w1*h1);
	printf("The circumference is %d\n\n",2*(w1+h1));
	printf("Plaese input two integers w and h:");
	scanf("%d %d",&w2,&h2);
	printf("w/h = %d ..... %d",w2/h2,w2%h2);
// Part (B)
	int n;
	printf("Input a number: ");
	scanf("%d", &n);
	printf("%d\n",n/10000+n%10000/1000*10+n%1000/100*100+n%100/10*1000+n%10*10000); // complete this line
	return 0;
}
