#include<stdio.h>
void en(char x[6][7]){
	char tem;
	//printf("Please give me a message to encode.\n");
	for(int i=0;i<6;i++)
		for(int j=0;j<7;j++)
			scanf("%c",&x[i][j]);
	/*for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}*/		
	for(int i=0;i<7;i++){
		tem=x[0][i];
		x[0][i]=x[2][i];
		x[2][i]=tem;
	}
	/*for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}*/
	for(int i=0;i<6;i++){
		tem=x[i][1];
		x[i][1]=x[i][4];
		x[i][4]=tem;
	}
	/*for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}*/
	for(int i=0;i<7;i++){
		tem=x[3][i];
		x[3][i]=x[5][i];
		x[5][i]=tem;
	}
	/*for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}*/
	for(int i=0;i<6;i++){
		tem=x[i][0];
		x[i][0]=x[i][4];
		x[i][4]=tem;
	}
	printf("Encoded massage:");
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);	
	}
	printf("\n");		
}
void de(char x[6][7]){
	char tem;
	for(int i=0;i<6;i++){
		tem=x[i][4];
		x[i][4]=x[i][0];
		x[i][0]=tem;
	}
	/*for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}*/
	for(int i=0;i<7;i++){
		tem=x[5][i];
		x[5][i]=x[3][i];
		x[3][i]=tem;
	}
	/*for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}*/
	for(int i=0;i<6;i++){
		tem=x[i][4];
		x[i][4]=x[i][1];
		x[i][1]=tem;
	}
	/*for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}*/
	for(int i=0;i<7;i++){
		tem=x[2][i];
		x[2][i]=x[0][i];
		x[0][i]=tem;
	}
	/*for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}*/
	printf("Decoded massage:");
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
	}
	printf("\n");
}
int main(){
	printf("----------part 1----------\n");
	char x[6][7];
	en(x);
	de(x);
	printf("----------part 2----------\n");
	
	int **x1,**y1,mul;
	int r,c,r1,c1;
	
	do{
	printf("Matrix1 size:\n");
	scanf("%d",&r);
	scanf("%d",&c);
	if(r==0||c==0){
		break;
	}
	x1=new int *[r];
	for(int i=0;i<r;i++)
		x1[i]=new int [c];
	printf("Matrix1 content:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&x1[i][j]);
		}
	}
	printf("Matrix2 size:\n");
	scanf("%d",&r1);
	if(r1!=c)
		printf("Wrong input!!\n");
	scanf("%d",&c1);
	y1=new int *[r1];
	for(int i=0;i<r1;i++)
		y1[i]=new int [c1];
	printf("Matrix2 content:\n");
	for(int i=0;i<r1;i++)
		for(int j=0;j<c1;j++){
			scanf("%d",&y1[i][j]);
		}
	printf("Matrix1 x Matrix2 = \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c1;j++){
			mul=0;
			for(int k=0;k<c;k++){
				mul+=x1[i][k]*y1[k][j];
			}
			printf("%3d ",mul);
			
		}
		printf("\n");
	}
	for(int i=0;i<r;i++)
		delete []x1[i];
	delete []x1;
	
	for(int i=0;i<r1;i++)
		delete []y1[i];
	delete []y1;
	}while(1);
	return 0;
}
