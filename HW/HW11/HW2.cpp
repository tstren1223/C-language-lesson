#include <stdio.h>
int main(){
	while(1){
	int **x1,**y1,mul;
	int r,c,r1,c1;
	printf("Please input row for first Matrix:");
	scanf("%d",&r);
	
	printf("Please input column for every row in first Matrix:");
	scanf("%d",&c);
	x1=new int *[r];
	for(int i=0;i<r;i++)
		x1[i]=new int [c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++){
			printf("Please input the number in %d row %d column:",i+1,j+1);
			scanf("%d",&x1[i][j]);
		}
	printf("Please input row for second Matrix:");
	scanf("%d",&r1);
	if(r1!=c)
		printf("Wrong input!!\n");
	printf("Please input column for every row in second Matrix:");
	scanf("%d",&c1);
	y1=new int *[r1];
	for(int i=0;i<r1;i++)
		y1[i]=new int [c1];
	for(int i=0;i<r1;i++)
		for(int j=0;j<c1;j++){
			printf("Please input the number in %d row %d column:",i+1,j+1);
			scanf("%d",&y1[i][j]);
		}
	for(int i=0;i<r;i++)
		for(int j=0;j<c1;j++){
			mul=0;
			for(int k=0;k<c;k++){
				mul+=x1[i][k]*y1[k][j];
			}
			printf("The answers of these two Matrix in %d row %d column are:%d\n",i+1,j+1,mul);
		}
	}
	return 0;
}
