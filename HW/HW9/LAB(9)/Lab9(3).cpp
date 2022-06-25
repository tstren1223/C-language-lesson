#include<stdio.h>
int pla=0,a,b,c,d,sel,con,times=0,con2;
void tran(int ar){
	int n=0;
	if(ar){
		pla+=4;
		tran(ar/10000);
		con2=1;
		con=0;
		times+=4;
		sel=0;
		a=ar%10000/1000;
		b=ar%1000/100;
		c=ar%100/10;
		d=ar%10;
		if((a*1000+b*100+c*10+d)==10||(a*1000+b*100+c*10+d)==100||(a*1000+b*100+c*10+d)==1000){
			con2=0;
			(a*1000+b*100+c*10+d)==10?printf("¬B   "):NULL;
			(a*1000+b*100+c*10+d)==100?printf("³ü   ¨Õ   "):NULL;
			(a*1000+b*100+c*10+d)==1000?printf("³ü   ¥a   ") :NULL; 
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
				if((times!=4)?(sel&&n):(con&&sel&&n)){
					printf("¹s   ");
				}
				//printf("%d\n",con);
				n?con=1:NULL;
				//printf("%d\n",con);
				switch(n){
					case 1:
						(i==3&&times==4&&pla!=4)?NULL:printf("³ü   ");
						sel=0;
						break;
					case 2:
						printf("¶L   ");
						sel=0;
						break;
					case 3:
						printf("°Ñ   ");
						sel=0;
						break;
					case 4:
						printf("¸v   ");
						sel=0;
						break;
					case 5:
						printf("¥î   ");
						sel=0; 
						break;
					case 6:
						printf("³°   ");
						sel=0;
						break;
					case 7:
						printf("¬m   ");
						sel=0;
						break;
					case 8:
						printf("®Ã   ");
						sel=0;
						break;
					case 9:
						printf("¨h   ");
						sel=0;
						break;
					default :
						sel++;
					}
				if(n){
					switch(i){
						case 1:
							printf("¥a   ");
							break;
						case 2:
							printf("¨Õ   ");
							break;
						case 3:
							printf("¬B   ");
							break;
					}
				}
			}
			
			}
		if(pla-times==12)
			printf("¥ü   ");
		else if(pla-times==8)
			printf("»õ   ");
		else if(pla-times==4)
			printf("¸U   ");
		}
	}
}
void C_print (double a, double b) 
{ 
	// print out (a + bi) or (a - bi) according to the sign of b 
	// print out a if b==0 
	if(b==0)
		printf("    %.2lf       ",a);
	else if(b<0)
		printf("(%.2lf - %.2lfi)",a,-b);
	else if(b>0)
		printf("(%.2lf + %.2lfi)",a,b);
} 
void C_add (double a, double b , double c, double d, double *e , double *f) 
{ 
// (e+fi) = (a+bi)+(c+di) 
	*e=a+c;
	*f=b+d;
} 
void C_sub (double a, double b , double c, double d, double *e , double *f) 
{ 
// (e+fi) = (a+bi)-(c+di) 
	*e=a-c;
	*f=b-d;
} 
void C_mul (double a, double b , double c, double d, double *e , double *f) 
{ 
// (e+fi) = (a+bi)*(c+di) 
	*e=a*c-b*d;
	*f=a*d+b*c;
} 
void C_div (double a, double b , double c, double d, double *e , double *f) 
{ 
// (e+fi) = (a+bi)/(c+di) 
	*e=(a*c+b*d)/(c*c+d*d);
	*f=(b*c-a*d)/(c*c+d*d);
} 
int main(){
	int ar;
	double a,b,c,d,e,f;
	printf("----- Case (a) -----\n");
	while(scanf("%d",&ar)!=EOF){
		tran(ar);
		printf("¤¸   ¾ã\n");
		times=0;
		pla=0;
	}
	printf("\n\n----- Case (b) -----\n");
	while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF){
		C_print(a,b); 
		printf(" + ");
		C_print(c,d); 
		C_add(a,b,c,d,&e,&f);  
		printf(" = "); 
		C_print(e,f); 
		printf("\n"); 
		C_print(a,b); 
		printf(" - ");
		C_print(c,d); 
		C_sub(a,b,c,d,&e,&f);  
		printf(" = "); 
		C_print(e,f); 
		printf("\n"); 
		C_print(a,b); 
		printf(" * ");
		C_print(c,d); 
		C_mul(a,b,c,d,&e,&f);  
		printf(" = "); 
		C_print(e,f); 
		printf("\n"); 
		C_print(a,b); 
		printf(" / ");
		C_print(c,d); 
		C_div(a,b,c,d,&e,&f);  
		printf(" = "); 
		C_print(e,f); 
		printf("\n"); 
  
	}
	return 0;
}
