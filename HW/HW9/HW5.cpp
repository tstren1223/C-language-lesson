#include<stdio.h>
#include<stdlib.h>
long long pla=0,a,b,c,d,sel,con,times=0,con2;
void tran(long long ar){
	int n=0;
	if(ar){
		pla+=4;
		tran(ar/10000);
		con2=1;//第一步確認是否需要兩個國字以上 
		con=0;//第二步確認是否需要壹到玖的國字 
		times+=4;
		sel=0;
		a=ar%10000/1000;
		b=ar%1000/100;
		c=ar%100/10;
		d=ar%10;
		if((a*1000+b*100+c*10+d)==10||(a*1000+b*100+c*10+d)==100||(a*1000+b*100+c*10+d)==1000){//考慮4格裡只有一個一只需要一個字 
			con2=0;
			(a*1000+b*100+c*10+d)==10?printf("拾   "):NULL;
			(a*1000+b*100+c*10+d)==100?printf("壹   佰   "):NULL;
			(a*1000+b*100+c*10+d)==1000?printf("壹   仟   ") :NULL; 
		}
		if((a||b||c||d)){
		
			if(con2){
				for(int i=1;i<=4;i++){//i控制每四位的第幾個 
			
					switch(i){
						case 1:
							n=a;//n控制要控制的那一位數字 
							break;
						case 2:
							n=b;
							break;
						case 3:
							n=c;
							break;
						case 4:
							n=d;
							break;
					}

					//printf("a=%d,b=%d,c=%d,d=%d,n=%d\n",a,b,c,d,n);
					//printf("times=%d,sel=%d,n=%d\n",times,sel,n);
					if((times!=4)?(sel&&n):(con&&sel&&n)){//times與sel掌管每四位的第一個國字不會有零
						printf("零   ");
					}
					//printf("%d\n",con);
					n?con=1:NULL;
					//printf("%d\n",con);
					switch(n){
						case 1:
							(i==3&&times==4&&pla!=4)?NULL:printf("壹   ");
							sel=0;
							break;
						case 2:
							printf("貳   ");
							sel=0;
							break;
						case 3:
							printf("參   ");
							sel=0;
							break;
						case 4:
							printf("肆   ");
							sel=0;
							break;
						case 5:
							printf("伍   ");
							sel=0; 
							break;
						case 6:
							printf("陸   ");
							sel=0;
							break;
						case 7:
							printf("柒   ");
							sel=0;
							break;
						case 8:
							printf("捌   ");
							sel=0;
							break;
						case 9:
							printf("玖   ");
							sel=0;
							break;
						default :
							sel++;
						}
					if(n){
						switch(i){
							case 1:
								printf("仟   ");
								break;
							case 2:
								printf("佰   ");
								break;
							case 3:
								printf("拾   ");
								break;
						}
					}
				}
			
			}
		if(pla-times==12)
			printf("兆   ");
		else if(pla-times==8)
			printf("億   ");
		else if(pla-times==4)
			printf("萬   ");
		}
	}
	else if(pla==0){
		printf("零   ");
	}
}
int main(){
	long long ar;
	printf("Please input an integer!\n");
	scanf("%lld",&ar);
	tran(ar);
	printf("元   整");
	times=0;
	pla=0;
	return 0;
}
