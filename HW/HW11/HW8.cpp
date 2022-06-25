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
		co=1;
		while(co){
			printf("Please input the distinct value in %d\n",i+1);
			scanf("%d",&x[i]);
			for(int j=0;j<i+1;j++){
				x[j]==x[i]?co--:NULL;//檢查是否都不一樣 
			}
		}
	}
	int y[n]={0};
	allo(x,y,n,1);
	printf("total number :%d\n",con);
	return 0;
}
/*
void permutation(int data[],int n,int size){
	//static int M = n;
	int i,t;
	if(n<size-1){
		for(i=n;i<size;i++){
		
			//data[i]與data[j]的交換
			t=data[n];
			data[n] = data[i];
			data[i] = t;
			
			permatation(data,n+1,size);
			
			t=data[n];
			data[n] = data[i];
			data[i] = t;  //還原
		}
	}else{
		for(i=0;i<size;i++)//顯示排列組合 
			printf("%d",data[i]);
		printf("\n");
	}
}*/
