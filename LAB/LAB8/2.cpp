#include<stdio.h>
long long rd(double,int);
double force(double);
int main(){
	double x1;
	int y;
	printf("a)\n");
	scanf("%lf %d",&x1,&y);
	printf("The result is %d.%lld\nb)\n",(int)x1,rd(x1,y));
	double po,vo;
//	char a,b,c,d,e;
	printf("Input your initial position: ");
	scanf("%lf",&po);
	printf("Inputsignal stream: ");
	while(scanf("%lf",&vo)){
	po+=force(vo);
	printf("%lf\n",po);
	}
	printf("The final position is %lf",po);
	return 0;
}
long long rd(double x,int y){
	int k=0;
	double x3=x;
	while(x3<10)
	{
		x3/=10;
		k++;
			//printf("x3=%lf x=%lf\n",x3,x);
	}
		//printf("x3=%lf x=%lf\n",x3,x);
	x3=(int)x3;
		//printf("x3=%lf x=%lf\n",x3,x);
	for(int i=1;i<=y;i++){
		x3*=10;
	}
	//printf("x3=%d\n",x3);
	for(int i=1;i<=y;i++){
		x*=10;
	}
	printf("x3=%lf x=%lf\n",x3,x);
	x=(long long)(x+0.5);
	return x-x3;
}
double force(double v){
	if(v>0){
		if((v-0.2)>0?v-0.2<1e-15:-(v-0.2)>1e-15)
			return 0;
		return 2*v;
	}
	else{
		if((v+0.2)>0?(v+0.2)>1e-15:-(v+0.2)<1e-15)
			return 0;
		return v;
	} 
	
}
