#include<stdio.h>
#define N 5
int M[N][N] = {100,2,3,4,5,1,3,4,9,6,10,7,3,3,1,1,4,5,7,8,12,11,8,9,99};
void LUdecom(float L[N][N],float U[N][N]){
	float sig=0; 
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			sig=0;
			for(int l=0;l<i;l++){
				sig+=L[i][l]*U[l][j];
			}
			if(i<=j)
				U[i][j]=M[i][j]-sig;
			else if(i>j)
				U[i][j]=0;
			sig=0;
			for(int l=0;l<i;l++){
				sig+=L[j][l]*U[l][i];
			}
			if(i==j)
				L[j][i]=1;
			else if(j<i)
				L[j][i]=0;
			else
				L[j][i]=(M[j][i]-sig)/U[i][i];
		}
	}
}
/*
void LUdecom(float L[N][N],float U[N][N]){
	float sum;
	for(int i=0;i<N;i++){
		L[i][i]=1;
		//update U row i
		for(int k=i;k<N;k++){
			sum = 0;
			for(int j=0;j<i;j++)
				sum+=L[i][j]*U[j][k];
				
			U[i][k] = A[i][k]-sum;
		}
		//update L col i;
		for(int k=i+1;k<N;k++){
			sum=0;
			for (int j=0;j<i;j++)
				sum+=L[k][j]*U[j][i];
			
			L[k][i] = (A[k][i]-sum)/U[i][i];
		}
	}
}
*/
void show(float L[N][N],float U[N][N]){
	printf("L:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<=i;j++)
			printf("%3.2f\t", L[i][j]);
		printf("\n");
	}
	printf("--------------\n");
	printf("U:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<i;j++)
			printf("\t");
		for(int j=i;j<N;j++)
			printf("%3.2f\t", U[i][j]);
		printf("\n");
	}
}
int main(){
	float L[N][N]={0}, U[N][N]={0};
	LUdecom(L,U);
	show(L, U);
	return 0;
}
