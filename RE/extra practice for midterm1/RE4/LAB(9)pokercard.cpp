#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N  2000000000 

void deal_uniform(int *s0,int *s1,int *s2,int *s3,int *s4,int *n0,int *n1,int *n2,int *n3,int *n4){
	for(int i=0;i<5;i++){
		switch(i){
			case 0:
				*s0=(int)(rand()/(RAND_MAX+1.0)*(4));
				*n0=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
				break;
			case 1:
				do{
					*s1=(int)(rand()/(RAND_MAX+1.0)*(4));
					*n1=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
				}while(*s1==*s0&&*n1==*n0);
				break;
			case 2:
				do{
					*s2=(int)(rand()/(RAND_MAX+1.0)*(4));
					*n2=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
				}while((*s2==*s0&&*n2==*n0)||(*s2==*s1&&*n2==*n1));
				break;
			case 3:
				do{
					*s3=(int)(rand()/(RAND_MAX+1.0)*(4));
					*n3=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
				}while((*s3==*s0&&*n3==*n0)||(*s3==*s1&&*n3==*n1)||(*s3==*s2&&*n3==*n2));
				break;
			case 4:
				do{
					*s4=(int)(rand()/(RAND_MAX+1.0)*(4));
					*n4=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
				}while((*s4==*s0&&*n4==*n0)||(*s4==*s1&&*n4==*n1)||(*s4==*s2&&*n4==*n2)||(*s4==*s3&&*n4==*n3));
				break;
		}
	}
}
void deal_notUniform(int *s0,int *s1,int *s2,int *s3,int *s4,int *n0,int *n1,int *n2,int *n3,int *n4){
	for(int i=0;i<5;i++){
		switch(i){
			case 0:
				*s0=rand()%4;
				*n0=rand()%13+1;
				break;
			case 1:
				do{
					*s1=rand()%4;
					*n1=rand()%13+1;
				}while(*s1==*s0&&*n1==*n0);
				break;
			case 2:
				do{
					*s2=rand()%4;
					*n2=rand()%13+1;
				}while((*s2==*s0&&*n2==*n0)||(*s2==*s1&&*n2==*n1));
				break;
			case 3:
				do{
					*s3=rand()%4;
					*n3=rand()%13+1;
				}while((*s3==*s0&&*n3==*n0)||(*s3==*s1&&*n3==*n1)||(*s3==*s2&&*n3==*n2));
				break;
			case 4:
				do{
					*s4=rand()%4;
					*n4=rand()%13+1;
				}while((*s4==*s0&&*n4==*n0)||(*s4==*s1&&*n4==*n1)||(*s4==*s2&&*n4==*n2)||(*s4==*s3&&*n4==*n3));
				break;
		}
	}
}

void checkRF(int *a,int s0,int s1,int s2,int s3,int s4,int n0,int n1,int n2,int n3,int n4){
	int check =0;
	if(s0==s1&&s0==s2&&s0==s3&&s0==s4){
		check++;
		if(n0==10||n1==10||n2==10||n3==10||n4==10) check++;
		if(n0==11||n1==11||n2==11||n3==11||n4==11) check++;
		if(n0==12||n1==12||n2==12||n3==12||n4==12) check++;
		if(n0==13||n1==13||n2==13||n3==13||n4==13) check++;
		if(n0==1||n1==1||n2==1||n3==1||n4==1) check++;
	}
	if(check==6) (*a)++;
}

void checkSF(int *b,int s0,int s1,int s2,int s3,int s4,int n0,int n1,int n2,int n3,int n4){
	int check=0;
	if(s0==s1&&s0==s2&&s0==s3&&s0==s4){
		check++;
		if(n0==n1+1||n0==n2+1||n0==n3+1||n0==n4+1) check++;
		if(n1==n0+1||n1==n2+1||n1==n3+1||n1==n4+1) check++;
		if(n2==n1+1||n2==n0+1||n2==n3+1||n2==n4+1) check++;
		if(n3==n1+1||n3==n2+1||n3==n0+1||n3==n4+1) check++;
		if(n4==n1+1||n4==n2+1||n4==n3+1||n4==n0+1) check++;
		
	}
	if(check==5) (*b)++;
	//printf("%d\n",*b);
}

void checkFOAK(int *c,int n0,int n1,int n2,int n3,int n4){
	int check=0;
	if(n1==n2&&n1==n3&&n1==n4) check++;
	if(n0==n2&&n0==n3&&n0==n4) check++;
	if(n0==n1&&n0==n2&&n0==n3) check++;
	if(n0==n1&&n0==n3&&n0==n4) check++;
	if(n0==n1&&n1==n2&&n1==n4) check++;
	if(check==1) (*c)++;
}

void checkFH(int *d,int n0,int n1,int n2,int n3,int n4){
	int check=0;
	if(n0==n1&&n2==n3&&n2==n4) check++;
	if(n0==n2&&n1==n3&&n1==n4) check++;
	if(n0==n3&&n1==n2&&n1==n4) check++;
	if(n0==n4&&n1==n2&&n1==n3) check++;
	if(n1==n2&&n0==n3&&n0==n4) check++;
	if(n1==n3&&n0==n2&&n0==n4) check++;
	if(n1==n4&&n0==n2&&n0==n3) check++;
	if(n2==n3&&n0==n1&&n0==n4) check++;
	if(n2==n4&&n0==n1&&n0==n3) check++;
	if(n3==n4&&n0==n1&&n0==n2) check++;
	if(check==1) (*d)++;
}

void checkAll(int *a,int *b,int *c,int *d,int s0,int s1,int s2,int s3,int s4,int n0,int n1,int n2,int n3,int n4){
	checkRF(a,s0,s1,s2,s3,s4,n0,n1,n2,n3,n4);
	checkSF(b,s0,s1,s2,s3,s4,n0,n1,n2,n3,n4);
	checkFOAK(c,n0,n1,n2,n3,n4);
	checkFH(d,n0,n1,n2,n3,n4);
}

void printResult(int a,int b,int c,int d,int an,int bn,int cn,int dn){
	printf("\n-- (a) Royal Flush    --\n");
	printf("Theoretical: 0.0001539%%\n");
	printf("Uniform    : %9.7lf%%\n",a/(N/100.));
	printf("Not Uniform: %9.7lf%%\n",an/(N/100.));
	printf("\n-- (b) Straight Flush  --\n");
	printf("Theoretical: 0.0013852%%\n");
	printf("Uniform    : %9.7lf%%\n",b/(N/100.));
	printf("Not Uniform: %9.7lf%%\n",bn/(N/100.));
	printf("\n-- (c) Four of A Kind   --\n");
	printf("Theoretical: 0.0240096%%\n");
	printf("Uniform    : %9.7lf%%\n",c/(N/100.));
	printf("Not Uniform: %9.7lf%%\n",cn/(N/100.));
	printf("\n-- (d) Full House       --\n");
	printf("Theoretical: 0.1440576%%\n");
	printf("Uniform    : %9.7lf%%\n",d/(N/100.));
	printf("Not Uniform: %9.7lf%%\n",dn/(N/100.));
	
}

int main(){
	srand(time(NULL));
	//suit:0-spare,1-heart,2-diamond,3-club
	//5 cards
	int s0,s1,s2,s3,s4;
	int n0,n1,n2,n3,n4;
	
	//simulation-uniform
	int a=0,b=0,c=0,d=0;
	for(int i=0;i<N;i++){
		deal_uniform(&s0,&s1,&s2,&s3,&s4,&n0,&n1,&n2,&n3,&n4);
		checkAll(&a,&b,&c,&d,s0,s1,s2,s3,s4,n0,n1,n2,n3,n4);
	}
	
	//simulation-not uniform
	int an=0,bn=0,cn=0,dn=0;
	for(int i=0;i<N;i++){
		deal_notUniform(&s0,&s1,&s2,&s3,&s4,&n0,&n1,&n2,&n3,&n4);
		checkAll(&an,&bn,&cn,&dn,s0,s1,s2,s3,s4,n0,n1,n2,n3,n4);
	}
	printResult(a,b,c,d,an,bn,cn,dn);
	return 0;
}
