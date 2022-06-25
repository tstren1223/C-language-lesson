#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void printChi(int num){
	switch(num){
		case 0: printf("零"); break;
		case 1: printf("壹"); break;
		case 2: printf("貳"); break;
		case 3: printf("參"); break;
		case 4: printf("肆"); break;
		case 5: printf("伍"); break;
		case 6: printf("陸"); break;
		case 7: printf("柒"); break;
		case 8: printf("捌"); break;
		case 9: printf("玖"); break;
	}
}

//分0995 0095 1905 1005 1095五種
void convert_basic(int num,int first){
	if(num/1000){
		printChi(num/1000);
		printf("仟");
	}
	else if (first!=1){//確保最一開始沒有零如果該值!=0 
		//0995 0095
		printf("零");
	}
	if((num%1000)/100){
		printChi((num%1000)/100);
		printf("佰");
	}
	//1095 1005
	if((num/1000)&&(num%1000)/100==0 && (num%100))
		printf("零");
	if((num%100)/10){
		if(num/10>1)
			printChi((num%100)/10);//拾億not壹拾億 
		printf("拾");
	}
	//1905
	if((num%1000)/100&&(num%100)/10==0&&(num%10))
		printf("零");
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
				case (1000000000000): printf("兆"); break;
				case (100000000): printf("億"); break;
				case (10000): printf("萬"); break;
			}
		}
		num%=tens;
		tens/=1e4;
	}
	printf("元整");
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
