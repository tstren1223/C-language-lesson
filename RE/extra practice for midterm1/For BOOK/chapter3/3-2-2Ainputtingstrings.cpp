#include<stdio.h>
#include<conio.h>
int main(){
	char name[20];
	printf("\nPlease enter your name:  ");
	scanf(" %s",name);
	printf("Your name is %s\n",name);//�Y��%s %s���¨S�� 
	scanf(" %s",name);//�������ΦA����J,�]���w�İϩ|���r�Gname=�w�İϳѾl���r 
	printf("Your name is %s\n",name);
	return 0;
}
