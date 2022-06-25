#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void printChi(int num){
	switch(num){
		case 0: printf("�s"); break;
		case 1: printf("��"); break;
		case 2: printf("�L"); break;
		case 3: printf("��"); break;
		case 4: printf("�v"); break;
		case 5: printf("��"); break;
		case 6: printf("��"); break;
		case 7: printf("�m"); break;
		case 8: printf("��"); break;
		case 9: printf("�h"); break;
	}
}

//��0995 0095 1905 1005 1095����
void convert_basic(int num,int first){
	if(num/1000){
		printChi(num/1000);
		printf("�a");
	}
	else if (first!=1){//�T�O�̤@�}�l�S���s�p�G�ӭ�!=0 
		//0995 0095
		printf("�s");
	}
	if((num%1000)/100){
		printChi((num%1000)/100);
		printf("��");
	}
	//1095 1005
	if((num/1000)&&(num%1000)/100==0 && (num%100))
		printf("�s");
	if((num%100)/10){
		if(num/10>1)
			printChi((num%100)/10);//�B��not���B�� 
		printf("�B");
	}
	//1905
	if((num%1000)/100&&(num%100)/10==0&&(num%10))
		printf("�s");
	if((num%10))
		printChi(num%10);
} 

void convert(long long num){
	long long tens=1e12;
	int first = 0;
	while(tens){
		if(num/tens){
			first++;
			convert_basic(num/tens,first);
			switch(tens){
				case (1000000000000): printf("��"); break;
				case (100000000): printf("��"); break;
				case (10000): printf("�U"); break;
			}
		}
		num%=tens;
		tens/=1e4;
	}
	printf("����");
}
int main(){
	long long num;
	printf("\n%d = ",1900);
	convert_basic(1900,1);
	printf("\n%d = ",1090);
	convert_basic(1090,1);
	printf("\n%d = ",1009);
	convert_basic(1009,1);
	printf("\n%d = ",1000);
	convert_basic(1000,1);
	printf("\n%d = ",909);
	convert_basic(909,1);
	printf("\n%d = ",900);
	convert_basic(900,1);
	printf("\n%d = ",90);
	convert_basic(90,1);
	printf("\n%d = ",9);
	convert_basic(9,1);
	while(printf("\nplease input a number!\n"),scanf("%lld",&num)){
		convert(num);
	}
	return 0;
}
