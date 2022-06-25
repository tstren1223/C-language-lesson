#include<stdio.h>
int main(){
	int f1=1,f2=1,f3=0,sum=2;
	//printf("f1=%d\nf2=%d\n",f1,f2);
	while(sum<1000){
		f3=f1+f2;
		f2=f1;
		f1=f3;
		sum+=f3;
}
	//for(int i=3;f3<=1000;i++){
	//	(i%2==1)?f3=f2+f1,printf("f%d=%d\n",i,f3),f1=f3,f3+=f2:printf("f%d=%d\n",i,f3),f2=f3;
	//}
	printf("\n%d",sum);
	return 0;
} 
 
