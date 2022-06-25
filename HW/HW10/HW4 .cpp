#include<stdio.h>
void robot(int, int, int, int *);
int main()
{
	int n, meter[100];
	scanf("%d", &n);
	
	robot(0, n, 0, meter);
}
void robot(int dis, int n, int index, int *ind[])
{
	for(int i = 1; i <= 2; i++)//1 step or 2
	{
		if(dis + i < n)//not enough
		{
			ind[index] = i;//mark
			robot(dis+i, n, index+1, ind);
		}
		else if((dis + i) == n)
		{
			ind[index] = i;
			for(int j = 0; j <= index ; j++)
				printf("%d", ind[j]);
			printf("\n");
		}
	}
}
/*
void robot(int n,int step)
//void robot (int n)
{
	static int rstack[10000] ={0};
	//static int step =0;
	int i;
	
	if(n>0){//step1
		rstack[step] = 1;
		robot(n-1,step+1);
	}
	
	if(n>1){//step2
		rstack[step] = 2;
		robot(n-2,step+1);
	}
	
	if(n==0){//ending part
		for(i=0;i<step;i++)
			printf("%d",rstack[i]);
		printf("\n");
	}
}
