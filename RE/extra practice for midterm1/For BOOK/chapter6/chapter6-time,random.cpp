#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i;
	for(i=0;i<5;i++)
		printf("%d\n",rand());//it should be different but it didn't
	printf("RAND_MAX=%d\n",RAND_MAX);
	printf("The total seconds:%ld.\n",time(NULL));
	srand(time(NULL));
	for(i=0;i<5;i++)
		printf("%d\n",rand());
		
		
		
	double num1,num2; 
	
	
	for(i=0;i<10;i++){
		num1=(double)rand()/(RAND_MAX+1.0);
		printf("%lf\n",num1);
		num2=(9.0-2.0)*num1+2.0;
		printf("%lf\n",num2); 
	}
	printf("\n");//The above,generate real random number
	
	
	int num;
	
	
	for(i=0;i<10;i++){
		num=rand()%6+1;
		printf("%3d",num);
	}
	printf("\n");
	
	
	//guessing number
	int num3,guess,count=0;
	num3=(int)((rand())/(RAND_MAX+1.0)*80+1);
	do{
		printf("Enter your guess(1-80):");
		scanf("%d",&guess);
		count++;
		if(guess >num3)
			printf("Too high...\n");
		else if(guess <num3)
			printf("Too low...\n");
		else
			printf("Bingo!\n");
			
	}
	while((guess!=num3)&&(count<5));
	if(guess!=num3)
		printf("Too bad,the number is %d",num3);
	else 
		printf("You are lucky!\n");
		
		
		
		
	
	return 0;
}
