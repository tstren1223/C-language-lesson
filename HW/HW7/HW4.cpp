#include<stdio.h>
#include<conio.h>
int main(){
	int k,fla,l;
	double gue;
	scanf("%d",&k);
	gue=k;
	do{
		gue=gue-(gue*gue-k)/(2*gue);
		gue*gue<k?fla=1:fla=0;
		l++;
	}while(fla==1?-(gue*gue-k)>1e-6:(gue*gue-k)>1e-6);
	printf("gue=%lf",gue);
	return 0;
}
