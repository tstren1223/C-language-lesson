#include<stdio.h>
int main(){
	for(int i=1;i<14;i++){//��14�� 
		char ch=64;//A=65
		for(int j=1;j<14;j++){
			if(i<=7){//�W�b�� 
				if(j<=7-i)//��̭����e�b�Ů� 
					printf(" ");
				else if((j>7-i)&&(j<7+i)){//�e�b�Ů�P��b�Ů椧�����d�� 
					((j<=7)&&(j>7-i))?ch++:ch--;//j>7-i���F��,j<=7�N++�_�h--�h�s�y��� 
					printf("%c",ch);
				}
			}
			else{//�U�b�� 
				if(j<=i-7)//i-7�P7-i��n�t�@�ӭ����t�� 
					printf(" ");
				else if((j>i-7)&&(j<21-i)){//�]���W�b���̰��Oj<14�ӱ��U�ӬO�q14-���U�����|7-i|=14+7-i=21-i 
					((j<=7)&&(j>i-7))?ch++:ch--;
					printf("%c",ch);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
