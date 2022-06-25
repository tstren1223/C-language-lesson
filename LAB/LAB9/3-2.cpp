#include<stdio.h>
void mul(long long *a111,long long *a112,long long *a211,long long *a222){
	long long a11=1,a12=1,a21=1,a22=0,e,b,c,d;
		e=a11*(*a111)+a12*(*a211);
		b=a11*(*a112)+a12*(*a222);
		c=a21*(*a111)+(*a211)*(*a222);
		d=a21*(*a112)+a22*(*a222);
		(*a111)=e;
		(*a112)=b;
		(*a211)=c;
		(*a222)=d;
		//printf("%d %d %d %d\n",a111,a112,a211,a222);
	
}
void tran(int ar,int times,int pla){
	int n=0,a,b,c,d,sel,con,con2;
	if(ar){
		pla+=4;
		tran(ar/10000,times,pla);
		con2=1;
		con=0;
		//printf("%d\n",pla);
		sel=0;
		a=ar%10000/1000;
		b=ar%1000/100;
		c=ar%100/10;
		d=ar%10;
		if((a*1000+b*100+c*10+d)==10||(a*1000+b*100+c*10+d)==100||(a*1000+b*100+c*10+d)==1000){
			con2=0;
			(a*1000+b*100+c*10+d)==10?printf("¬B"):NULL;
			(a*1000+b*100+c*10+d)==100?printf("³ü¨Õ"):NULL;
			(a*1000+b*100+c*10+d)==1000?printf("³ü¥a") :NULL; 
		} 
		if((a||b||c||d)){
		
			if(con2){
				for(int i=1;i<=4;i++){
			
					switch(i){
						case 1:
							n=a;
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
				if((pla!=times)?(sel&&n):((con&&sel&&n))){
					printf("¹s");
				}
				//printf("%d\n",con);
				n?con=1:NULL;
				//printf("%d\n",con);
				switch(n){
					case 1:
						(i==3&&times==pla)?NULL:printf("³ü");
						sel=0;
						break;
					case 2:
						printf("¶L");
						sel=0;
						break;
					case 3:
						printf("°Ñ");
						sel=0;
						break;
					case 4:
						printf("¸v");
						sel=0;
						break;
					case 5:
						printf("¥î");
						sel=0; 
						break;
					case 6:
						printf("³°");
						sel=0;
						break;
					case 7:
						printf("¬m");
						sel=0;
						break;
					case 8:
						printf("®Ã");
						sel=0;
						break;
					case 9:
						printf("¨h");
						sel=0;
						break;
					default :
						sel++;
					}
				if(n){
					switch(i){
						case 1:
							printf("¥a");
							break;
						case 2:
							printf("¨Õ");
							break;
						case 3:
							printf("¬B");
							break;
					}
				}
			}
			
			}
		if(pla==16)
			printf("¥ü");
		else if(pla==12)
			printf("»õ");
		else if(pla==8)
			printf("¸U");
		}
	}
	else if(times==0){
		printf("¹s   ");
	}
}
 
int main(){
	long long a,ar,times=0,pla=0,a111,a112,a211,a222;
	printf("----part A----\n");
	while(scanf("%lld",&a)!=EOF){
		a111=1,a112=0,a211=0,a222=1;
		for(int i=1;i<=a;i++){
		mul(&a111,&a112,&a211,&a222);
		printf("%d ",a112);
		}
		printf("\n");
	}
	printf("----part B----\n");
	while(scanf("%d",&ar)!=EOF){
		a=ar;
		while(a){
			times+=4;
			a/=10000;
		}
		tran(ar,times,pla);
		printf("\n");
		times=0;
		pla=0;
	}
	return 0;
}
