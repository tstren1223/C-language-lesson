#include<stdio.h>
int main(){
	int a,b,c,t;
	printf("Enter lengths of the edges of a triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b){//swap±Æ¥Xa>b>c 
		t=a;
		a=b;
		b=t;
	}
	if(a<c){
		t=a;
		a=c;
		c=t;
	}
	if(b<c){
		t=b;
		b=c;
		c=t;
	}
	if(b+c<=a)
		printf("Can not be a triangle!\n");
	else if(a*a==b*b+c*c)
		printf("Right triangle!\n");
	else if(a*a>b*b+c*c)
		printf("Obtuse triangle!\n");
	else
		printf("Acute triangle!\n");
	return 0;
}
