#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(){
	int **x,i=1;
	while(i!=1){
		int k=2;
		printf("%u\n%d\n",&k,k);
		k++;
	}
	x=new int*[10];//()�̥i�H���l�� 
	for(int j=0;j<10;j++)
		x[j]=new int[10];
	for(int l=0;l<10;l++){
		for(int j=0;j<10;j++){
			printf("%u\n",&x[l][j]);
		}
	}
	//for(int l=0;l<10;l++)
	//	delete []x[l];
	
		
	delete []x;//�udelete x�b�G���}�C��ܧR���_�l��m��row 
	getch();
	for(int l=0;l<10;l++){
		for(int j=0;j<10;j++){
			printf("%u\n",&x[l][j]);
		}
		
			getch();
	}
	//delete x;
	
	
	return 0;
}
