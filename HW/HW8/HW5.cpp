#include <stdio.h>
double force(double);
int main (){
	double po,vo;
//	char a,b,c,d,e;
	printf("input your initial position and voltages:\n");
	scanf("%lf",&po);
	while(scanf("%lf",&vo)){
	po+=force(vo);
	}
	printf("Final position %lf",po);		
	return 0;
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
