#include<stdio.h>
void en(char x[6][7]){
	char tem;
	printf("Please give me a message to encode.\n");
	for(int i=0;i<6;i++)
		for(int j=0;j<7;j++)
			scanf("%c",&x[i][j]);/*
			while(scanf("%c",&ch){
			if(ch=='\n')
				break;
			else
				msgsq[cnt/N][cnt%N]= ch;
				cnt++;
			}
			*/
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}		
	for(int i=0;i<7;i++){
		tem=x[0][i];
		x[0][i]=x[2][i];
		x[2][i]=tem;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<6;i++){
		tem=x[i][1];
		x[i][1]=x[i][4];
		x[i][4]=tem;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<7;i++){
		tem=x[3][i];
		x[3][i]=x[5][i];
		x[5][i]=tem;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<6;i++){
		tem=x[i][0];
		x[i][0]=x[i][4];
		x[i][4]=tem;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
			
}
void de(char x[6][7]){
	char tem;
	for(int i=0;i<6;i++){
		tem=x[i][4];
		x[i][4]=x[i][0];
		x[i][0]=tem;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<7;i++){
		tem=x[5][i];
		x[5][i]=x[3][i];
		x[3][i]=tem;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<6;i++){
		tem=x[i][4];
		x[i][4]=x[i][1];
		x[i][1]=tem;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<7;i++){
		tem=x[2][i];
		x[2][i]=x[0][i];
		x[0][i]=tem;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
}
int main(){
	char x[6][7];
	en(x);
	printf("\n\n");
	de(x);
	return 0;
}
