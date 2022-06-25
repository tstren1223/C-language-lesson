#include <stdio.h>
int con=0;
void allo(int *x,int *y,int n,int po){//po用在陣列裡第幾個 
	if(po==n+1){
		for(int i=0;i<n;i++)
			i!=n-1?printf("%d",y[i]):printf("%d",y[i]);
		printf("\n");
		con++;
	}
	else{
		for(int i=po-1;i<n;i++){
			y[i]=0;
		}
		for(int i=0;i<n;i++){
			int l=1;
			y[po-1]=x[i];//第po若插入第i個 
				for(int k=0;k<po-1;k++)
					y[po-1]==y[k]?l--:NULL;
			/*for(int i=0;i<n;i++)
			i!=n-1?printf("%d",y[i]):printf("%d",y[i]);
		printf("\n");
			printf("%d\n",l);*/
			if(l==1){
				allo(x,y,n,po+1);
			}
		}
	}
}
int main(){
	printf("Please input the number you will input\n");
	int n,co;
	scanf("%d",&n);
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=i+1;
		
	}
	int y[n]={0};
	allo(x,y,n,1);
	printf("total number :%d\n",con);
	return 0;
}
