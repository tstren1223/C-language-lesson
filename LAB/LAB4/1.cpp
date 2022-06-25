#include<stdio.h>
int main(){
	double s=0;
	int i=1,sign=1;
	while(1./i>=1e-6){
		s+=1./i*sign;
		i+=2;
		sign*=-1;
	}
	printf("----part (A)----\npi/4 = %lf\n",s);
	s=0;
	int f1=1,f2=1,f3=0,sum=2;
	//printf("f1=%d\nf2= %d\n",f1,f2);
	while(sum<1000){
		f3=f1+f2;
		f2=f1;
		f1=f3;
		sum+=f3;
}
	//for(int i=3;f3<=1000;i++){
	//	(i%2==1)?f3=f2+f1,printf("f%d=%d\n",i,f3),f1=f3,f3+=f2:printf("f%d=%d\n",i,f3),f2=f3;
	//}
	printf("----part(B)----\n%d",sum);
	return 0;
} 
