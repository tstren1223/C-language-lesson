#include<stdio.h>
#include<stdlib.h>
long long pla=0,a,b,c,d,sel,con,times=0,con2;
void tran(long long ar){
	int n=0;
	if(ar){
		pla+=4;
		tran(ar/10000);
		con2=1;//�Ĥ@�B�T�{�O�_�ݭn��Ӱ�r�H�W 
		con=0;//�ĤG�B�T�{�O�_�ݭn����h����r 
		times+=4;
		sel=0;
		a=ar%10000/1000;
		b=ar%1000/100;
		c=ar%100/10;
		d=ar%10;
		if((a*1000+b*100+c*10+d)==10||(a*1000+b*100+c*10+d)==100||(a*1000+b*100+c*10+d)==1000){//�Ҽ{4��̥u���@�Ӥ@�u�ݭn�@�Ӧr 
			con2=0;
			(a*1000+b*100+c*10+d)==10?printf("�B   "):NULL;
			(a*1000+b*100+c*10+d)==100?printf("��   ��   "):NULL;
			(a*1000+b*100+c*10+d)==1000?printf("��   �a   ") :NULL; 
		}
		if((a||b||c||d)){
		
			if(con2){
				for(int i=1;i<=4;i++){//i����C�|�쪺�ĴX�� 
			
					switch(i){
						case 1:
							n=a;//n����n������@��Ʀr 
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
					if((times!=4)?(sel&&n):(con&&sel&&n)){//times�Psel�x�ިC�|�쪺�Ĥ@�Ӱ�r���|���s
						printf("�s   ");
					}
					//printf("%d\n",con);
					n?con=1:NULL;
					//printf("%d\n",con);
					switch(n){
						case 1:
							(i==3&&times==4&&pla!=4)?NULL:printf("��   ");
							sel=0;
							break;
						case 2:
							printf("�L   ");
							sel=0;
							break;
						case 3:
							printf("��   ");
							sel=0;
							break;
						case 4:
							printf("�v   ");
							sel=0;
							break;
						case 5:
							printf("��   ");
							sel=0; 
							break;
						case 6:
							printf("��   ");
							sel=0;
							break;
						case 7:
							printf("�m   ");
							sel=0;
							break;
						case 8:
							printf("��   ");
							sel=0;
							break;
						case 9:
							printf("�h   ");
							sel=0;
							break;
						default :
							sel++;
						}
					if(n){
						switch(i){
							case 1:
								printf("�a   ");
								break;
							case 2:
								printf("��   ");
								break;
							case 3:
								printf("�B   ");
								break;
						}
					}
				}
			
			}
		if(pla-times==12)
			printf("��   ");
		else if(pla-times==8)
			printf("��   ");
		else if(pla-times==4)
			printf("�U   ");
		}
	}
	else if(pla==0){
		printf("�s   ");
	}
}
int main(){
	long long ar;
	printf("Please input an integer!\n");
	scanf("%lld",&ar);
	tran(ar);
	printf("��   ��");
	times=0;
	pla=0;
	return 0;
}
