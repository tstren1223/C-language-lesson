#include<stdio.h>
#include<conio.h>
int main(){
	int k;
	for(int i=1;i<14;i++){
		char ch=64;
		i>7?k=14-i:k=i;//�W�U�����Τ@,�u��t�� 
		for(int j=1;j<14;j++){
			if(j<=7-k)
				printf(" ");
			else if((j>7-k)&&(j<7+k)){
				((j<=7)&&(j>7-k))?ch++:ch--;
				printf("%c",ch);
			}
			else 
				printf(" ");
		}
		printf("\n");
		getch();
	}
	return 0;
}
