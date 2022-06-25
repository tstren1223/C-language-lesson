#include<stdio.h>
#include<conio.h>
#define n 4
void dis(int x[],int num){
	int i;
	for(i=0;i<n;i++){
		x[i] = num%10;
		num/=10;
	}
}
void sort(int x[]){
	int i,j;
	void swap(int *,int *);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(x[i]>x[j])
				swap(&x[i],&x[j]);
}
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void assem(int x[],int *max,int *min){
	int i;
	for(i=0;i<n;i++){
		*min=*min*10+x[i];
		*max=*max*10+x[n-i-1];
	}
	//printf("Max:%d\nMIN:%d\n",*max,*min);
}
int main(){
	int num,dif,org,max=0,min=0,i;
	int x[n];
	printf("Enter a 4 digit number: ");
	scanf("%d",&num);
	printf("  num  max  min  dif  \n");
	printf("----------------------\n");
	do{
		org=num;
		dis(x,org);
		sort(x);
		max=min=0;
		assem(x,&max,&min);
		dif=max-min;
		printf("%6d%6d%6d%6d\n",org,max,min,dif);
		num=dif;
		//getch();
	}while(org!=dif);
	
	return 0;
}
