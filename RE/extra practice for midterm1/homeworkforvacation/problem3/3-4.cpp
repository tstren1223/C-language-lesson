#include<stdio.h>
int gcd(int a,int b){
	if(a==0||b==0)
		if(a)
			return a;
		else if(b)
			return b;
		else
			return 0;
	else 
		while((a%=b)&&(b%=a));
		return a+b;
	
}
int main(){
	int a,b,p=1;
	while(printf("case %d:\n",p),scanf("%d%d",&a,&b)!=EOF){
		p++;
		printf("%d\n",gcd(a,b));
	}
	return 0;
}
