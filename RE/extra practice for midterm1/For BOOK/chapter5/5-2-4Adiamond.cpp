#include<stdio.h>
int main(){
	for(int i=1;i<14;i++){//分14行 
		char ch=64;//A=65
		for(int j=1;j<14;j++){
			if(i<=7){//上半部 
				if(j<=7-i)//行裡面的前半空格 
					printf(" ");
				else if((j>7-i)&&(j<7+i)){//前半空格與後半空格之間的範圍 
					((j<=7)&&(j>7-i))?ch++:ch--;//j>7-i必達成,j<=7就++否則--則製造對稱 
					printf("%c",ch);
				}
			}
			else{//下半部 
				if(j<=i-7)//i-7與7-i恰好差一個乘的負號 
					printf(" ");
				else if((j>i-7)&&(j<21-i)){//因為上半部最高是j<14而接下來是從14-往下絕對值|7-i|=14+7-i=21-i 
					((j<=7)&&(j>i-7))?ch++:ch--;
					printf("%c",ch);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
