#include<stdio.h>
#include <cmath>
void separate( double num,char * signp,int * wholep,double * fracp){
	num>=0?*(signp)='+':*(signp)='-';
	*(wholep)=(int)num;
	*(fracp)=fabs(num-*(wholep));
}

int main(){
	double num;
	char signp;
	int wholep;
	double fracp;
	
	while(printf("num: "), scanf("%lf",&num)){//與if條件有多子句一樣,while的條件若有逗號子句則看右邊的為主!另,printf return the length of the string!! 
	//printf("Please enter a real number\n");
	//scanf("%lf",&num);
	separate(num,&signp,&wholep,&fracp);
	printf("num:%lf\nsign:%c\nwhole part:%d\nfractional part:%lf\n",num,signp,abs(wholep),fracp);
	}
	return 0;
}
