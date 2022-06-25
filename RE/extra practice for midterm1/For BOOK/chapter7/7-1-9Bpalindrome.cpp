#include<stdio.h>
#include<conio.h>
int isNP(int num){
	int d=1;
	if(num<0) 
		return 0;
	if(num<10)
		return 1;
	else
	{
		while((num/d)>=10)
			d*=10;
		
		printf("d=%d\n",d);
		while(num>=10){
			if((num/d)!=(num%10))
				return 0;
			else{
				num=num%d;
				num=num/10;
				d/=100;
			}
		}
		return 1;
	}
}
int main(){
	int data;
	printf("Please enter non-negative integer:");
	scanf("%d",&data);
	if(isNP(data))
		printf("Data %d is a palindrome\n",data);
	else
		printf("Data %d is not a palindrome.\n",data);
	
	return 0;
}
