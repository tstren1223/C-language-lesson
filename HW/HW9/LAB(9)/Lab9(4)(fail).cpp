#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//fail����]:�S���B�z�P�i�d���ƥX�{,�Ȧ��B�z���i��5�i�P�Ʀr�d======>�y����L�d�X�{���v�L�k�ŦX�{��!! 
void order(int *a,int *b){
	int k;
	if(*a>*b){
		k=*a;
		*a=*b;
		*b=k;
	}
}
void deal_uniform(int *suit1,int *suit2,int *suit3,int *suit4,int *suit5,int *num1,int *num2,int *num3,int *num4,int *num5){
	int cho,cho1;
	for(int i=1;i<=5;i++){
		cho1=(int)(rand()/(RAND_MAX+1.0)*(4))+1;
		cho=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
		switch(i){
			case 1:
				*suit1=cho1;
				*num1=cho;
				break;
			case 2:
				*suit2=cho1;
				*num2=cho;
				break;
			case 3:
				*suit3=cho1;
				*num3=cho;
				break;
			case 4:
				*suit4=cho1;
				*num4=cho;
				break;
			case 5:
				*suit5=cho1;
				*num5=cho;
				break;
		}
			
	}
	order(num1,num2);
	order(num1,num3);
	order(num1,num4);
	order(num1,num5);
	order(num2,num3);
	order(num2,num4);
	order(num2,num5);
	order(num3,num4);
	order(num3,num5);
	order(num4,num5);
	while(*num5==*num1){
		*num5=cho=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
		order(num1,num2);
		order(num1,num3);
		order(num1,num4);
		order(num1,num5);
		order(num2,num3);
		order(num2,num4);
		order(num2,num5);
		order(num3,num4);
		order(num3,num5);
		order(num4,num5);
	}
}
void deal_notUniform(int *suit1,int *suit2,int *suit3,int *suit4,int *suit5,int *num1,int *num2,int *num3,int *num4,int *num5){
	int cho,cho1;
	for(int i=1;i<=5;i++){
		cho1=rand()%4+1;
		cho=rand()%13+1;
		switch(i){
			case 1:
				*suit1=cho1;
				*num1=cho;
				break;
			case 2:
				*suit2=cho1;
				*num2=cho;
				break;
			case 3:
				*suit3=cho1;
				*num3=cho;
				break;
			case 4:
				*suit4=cho1;
				*num4=cho;
				break;
			case 5:
				*suit5=cho1;
				*num5=cho;
				break;
		}
			
	}
	order(num1,num2);
	order(num1,num3);
	order(num1,num4);
	order(num1,num5);
	order(num2,num3);
	order(num2,num4);
	order(num2,num5);
	order(num3,num4);
	order(num3,num5);
	order(num4,num5);
	//printf("%d %d %d %d %d\n\n",*num1,*num2,*num3,*num4,*num5);
	while(*num5==*num1){
		*num5=cho=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
		order(num1,num2);
		order(num1,num3);
		order(num1,num4);
		order(num1,num5);
		order(num2,num3);
		order(num2,num4);
		order(num2,num5);
		order(num3,num4);
		order(num3,num5);
		order(num4,num5);
	}
}
void checkRE(int suit1,int suit2,int suit3,int suit4,int suit5,int num1,int num2,int num3,int num4,int num5,int *RE){
	
	if(num1==1&&num2==10&&num3==11&&num4==12&&num5==13){
		if(suit1==suit2&&suit1==suit3&&suit1==suit4&&suit1==suit5)
			(*RE)++;
	}
}
void checkSF(int suit1,int suit2,int suit3,int suit4,int suit5,int num1,int num2,int num3,int num4,int num5,int *SF){
	
	if(num1==num2-1&&num2==num3-1&&num3==num4-1&&num4==num5-1){
			if(suit1==suit2&&suit1==suit3&&suit1==suit4&&suit1==suit5)
				(*SF)++;
	}
	else if(num1==1&&num2==10&&num3==11&&num4==12&&num5==13){
		if(suit1==suit2&&suit1==suit3&&suit1==suit4&&suit1==suit5)
				(*SF)++;
	}
	
}
void checkFOAK(int suit1,int suit2,int suit3,int suit4,int suit5,int num1,int num2,int num3,int num4,int num5,int *FOAK){
	if(num1==num2&&num1==num3&&num1==num4)
		(*FOAK)++;
	if(num2==num3&&num2==num5&&num2==num4)
		(*FOAK)++;
}
void checkFH(int suit1,int suit2,int suit3,int suit4,int suit5,int num1,int num2,int num3,int num4,int num5,int *FH){
	
	if(num1==num2&&num1==num3){
		if(num4==num5)
			(*FH)++;
	}
	if(num3==num4&&num3==num5){
		if(num1==num2)
			(*FH)++;
	}
}
void checkall(int suit1,int suit2,int suit3,int suit4,int suit5,int num1,int num2,int num3,int num4,int num5,int *RE,int *SF,int *FOAK,int *FH){
	checkRE(suit1,suit2,suit3,suit4,suit5,num1,num2,num3,num4,num5,RE);
	checkSF(suit1,suit2,suit3,suit4,suit5,num1,num2,num3,num4,num5,SF);
	checkFOAK(suit1,suit2,suit3,suit4,suit5,num1,num2,num3,num4,num5,FOAK);
	checkFH(suit1,suit2,suit3,suit4,suit5,num1,num2,num3,num4,num5,FH);
}
void printresult(int RE1,int SF1,int FOAK1,int FH1,int RE2,int SF2,int FOAK2,int FH2){
	printf("-- (a) Royal Flush    --\nTheoretical: 0.0001539%\nUniform: %.7lf%\nNot Uniform: %.7lf%\n\n\n",RE1*1.0/2000000000*100,RE2*1.0/2000000000*100);
	printf("-- (b) Straight Flush --\nTheoretical: 0.0013852%\nUniform: %.7lf%\nNot Uniform: %.7lf%\n\n\n",SF1*1.0/2000000000*100,SF2*1.0/2000000000*100);
	printf("-- (c) Four of A Kind --\nTheoretical: 0.0240096%\nUniform: %.7lf%\nNot Uniform: %.7lf%\n\n\n",FOAK1*1.0/2000000000*100,FOAK2*1.0/2000000000*100);
	printf("-- (d) Full House     --\nTheoretical: 0.1440576%\nUniform: %.7lf%\nNot Uniform: %.7lf%\n\n\n",FH1*1.0/2000000000*100,FH2*1.0/2000000000*100);
}
int main(){
	int suit1,suit2,suit3,suit4,suit5,suit6,suit7,suit8,suit9,suit;
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num;
	int RE1=0,RE2=0,SF1=0,SF2=0,FOAK1=0,FOAK2=0,FH1=0,FH2=0;
	srand(time(NULL));
	for(int i=1;i<=2000000000;i++){
		deal_uniform(&suit1,&suit2,&suit3,&suit4,&suit5,&num1,&num2,&num3,&num4,&num5);
		deal_notUniform(&suit6,&suit7,&suit8,&suit9,&suit,&num6,&num7,&num8,&num9,&num);
		checkall(suit1,suit2,suit3,suit4,suit5,num1,num2,num3,num4,num5,&RE1,&SF1,&FOAK1,&FH1);
		checkall(suit6,suit7,suit8,suit9,suit,num6,num7,num8,num9,num,&RE2,&SF2,&FOAK2,&FH2);
		//if(i%10000000==0)
			//printresult(RE1,SF1,FOAK1,FH1,RE2,SF2,FOAK2,FH2);
	}
	printresult(RE1,SF1,FOAK1,FH1,RE2,SF2,FOAK2,FH2);
	return 0;
}
