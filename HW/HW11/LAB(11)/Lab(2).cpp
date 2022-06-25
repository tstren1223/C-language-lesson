#include <stdio.h>
void en(char x[6][7]){
	char tem;
	for(int i=0;i<6;i++)
		for(int j=0;j<7;j++)
			scanf("%c",&x[i][j]);
	printf("\noriginal:\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}		
	printf("\nencoded:\n");
	for(int i=0;i<7;i++){
		tem=x[0][i];
		x[0][i]=x[2][i];
		x[2][i]=tem;
	}
	printf("\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<6;i++){
		tem=x[i][1];
		x[i][1]=x[i][4];
		x[i][4]=tem;
	}
	
	printf("\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<7;i++){
		tem=x[3][i];
		x[3][i]=x[5][i];
		x[5][i]=tem;
	}
	printf("\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<6;i++){
		tem=x[i][0];
		x[i][0]=x[i][4];
		x[i][4]=tem;
	}
	printf("\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	
	printf("\n result:\n");
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
	}
			
}
void de(char x[6][7]){
	char tem;
	printf("decoded:");
	printf("\n    1234567\n");
	
	for(int i=0;i<6;i++){
		tem=x[i][4];
		x[i][4]=x[i][0];
		x[i][0]=tem;
	}
	
	printf("\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<7;i++){
		tem=x[5][i];
		x[5][i]=x[3][i];
		x[3][i]=tem;
	}
	
	printf("\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<6;i++){
		tem=x[i][4];
		x[i][4]=x[i][1];
		x[i][1]=tem;
	}
	
	printf("\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	for(int i=0;i<7;i++){
		tem=x[2][i];
		x[2][i]=x[0][i];
		x[0][i]=tem;
	}
	
	printf("\n    1234567\n");
	for(int i=0;i<6;i++){
		printf("%d : ",i);
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
		printf("\n");	
	}
	
	printf("result:\n");
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++)
			printf("%c",x[i][j]);
	}
}
int main(){
	int **x1,**y1,mul,latter;
	int r,c,r1,c1;
	printf("(a)Input A: ");
	scanf(" %d",&r);
	scanf(" %d",&c);
	x1=new int *[r];
	for(int i=0;i<r;i++)
		x1[i]=new int [c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++){
			scanf(" %d",&x1[i][j]);
		}
	printf("Input B: ");
	scanf(" %d",&r1);
	/*if(r1!=c)
		printf("Wrong input!!\n");*/
	scanf(" %d",&c1);
	y1=new int *[r1];
	for(int i=0;i<r1;i++)
		y1[i]=new int [c1];
	for(int i=0;i<r1;i++)
		for(int j=0;j<c1;j++){
			scanf(" %d",&y1[i][j]);
		}
	for(int i=0;i<r;i++){
		for(int j=0;j<c1;j++){
			mul=0;
			for(int k=0;k<c;k++){
				mul+=x1[i][k]*y1[k][j];
			}
			printf("%2d ",mul);
			
		}
		
		printf("\n");
	}
		printf("\n\n(b)\ninput message:\n");
	scanf("%c",&latter);
	char x[6][7];
	en(x);
	printf("\n\n");
	de(x);
	return 0;
}
