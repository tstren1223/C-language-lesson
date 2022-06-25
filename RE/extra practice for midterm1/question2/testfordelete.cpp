#include<stdio.h>
void del(int **x,int n,int m){
	for(int a=0;a<m;a++)
		delete []x[a];
	delete []x;
	printf("%d",x[0][0]);
}
int **Matrix(int n,int m){
	int **x;
	x=new int *[n];
	for(int i=0;i<n;i++)
		x[i]=new int [m];
	for(int a=0;a<n;a++)
		for(int b=0;b<m;b++){
			printf("Please input number in %d of %d: ",a+1,b+1);
			scanf("%d",&x[a][b]);
		}
	return x;
}
int main(){
	int **x;
	int m,n;
	scanf("%d",&n);
	scanf("%d",&m);
	x=Matrix(n,m);
	x[0][0]=5;
	//delete []x[0];
	//delete[]x;
	del(x,n,m);
	return 0;
	
}
