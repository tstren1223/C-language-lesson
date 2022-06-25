#include<stdio.h>
#include<conio.h>
int fib(int n){
	if(n==0||n==1)
		return 1;
	int *table = new int[n+1];
	int i,f;
	for(i=0;i<=n;i++)
		table[i]=0;
	table[0]=table[1]=1;
	for(i=2;i<=n;i++)
		table[i]=table[i-1]+table[i-2];
	f=table[n];
	delete []table;
	return f;
}
int main(){
	int n;
	printf("Please enter:");
	scanf("%d",&n);
	printf("fib=%d\n",fib(n));
	getch();
	return 0;
}
