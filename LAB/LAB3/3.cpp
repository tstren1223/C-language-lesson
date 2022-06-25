#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,c;
	printf("Input the height of the diamond:");
	scanf("%d",&a);
	c=a;	
	a%2==1?a=a:a=a-1;
	for(int i=0;i<a;i++){
		for(int b=0;b<=c;b++){
		abs(b-a/2.)+0.5<=(abs(abs(i-a/2)+0.5-(a+1)/2)+0.5)?printf("*"):printf(" ");} 
		printf("\n");
	}
	return 0;
}
