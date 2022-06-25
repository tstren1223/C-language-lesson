#include<stdio.h>
int main(){
	int a=1,a1=0,a2=0,a3=0,a4=0,a5=0;
	while(a!=0){
		scanf("%d",&a);
		(a>a4)?a4=a:printf("");
		(a>0)&&(a1==0)?a1=a:(a1!=0)&&(a2==0)?a2=a:(a2!=0)&&(a3==0)?a3=a:printf("");
		a2+a3>0&&(a3!=0)?a1+=a2+a3,a2=0,a3=0:a2+a3<0&&(a3<0)?a4=a1,a1=0,a2=0,a3=0:a2+a3<0&&(a3>0)?a4=a1,a1=a3,a2=0,a3=0:printf("");
		printf("%4d%4d%4d%4d\n",a1,a2,a3,a4);
	}
	a4>=a1?printf("%d",a4):(a2>0)?printf("%d",a1+a2):printf("%d",a1);
	return 0;
} 
 
